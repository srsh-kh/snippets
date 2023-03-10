const express = require('express');
const app = express();
const path = require('path');
const mongoose = require('mongoose');
const methodOverride = require('method-override');

const Product = require('./models/product');
const { urlencoded, application } = require('express');

//Do NOT use localhost. use 0.0.0.0
mongoose.connect('mongodb://0.0.0.0:27017/farmStand')
    .then(() => {
        console.log('Connection Established with MongoDB');
    })
    .catch(err => {
        console.log('MongoDB Connection Error!')
        console.log(err);
    })

app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'ejs');

// Middleware:
app.use(urlencoded({ extended: true }))
app.use(methodOverride('_method'))

app.get('/farms/new', (req, res) => {
    res.render('farms/new')
})

const categories = ['fruit', 'vegetable', 'dairy'];

app.get('/products', async (req, res) => {
    const { category } = req.query;
    if (category) {
        function capitalize(string) {
            return string[0].toUpperCase() + string.slice(1);
        }

        const products = await Product.find({ category: category })
        res.render('products/index.ejs', { products, category: capitalize(category) })
    } else {
        const products = await Product.find({});
        res.render('products/index.ejs', { products, category: 'All' })
    }
})

app.get('/products/new', (req, res) => {
    res.render('products/new', { categories });
})

app.post('/products', async (req, res) => {
    const newProduct = new Product(req.body);
    await newProduct.save();
    console.log(newProduct);
    res.redirect(`/products/${newProduct._id}`)
})

app.get('/products/:id', async (req, res) => {
    const { id } = req.params;
    const product = await Product.findById(id)
    res.render('products/show', { product });
})

app.get('/products/:id/edit', async (req, res) => {
    const { id } = req.params;
    const product = await Product.findById(id)
    res.render('products/edit.ejs', { product, categories });
})

app.put('/products/:id', async (req, res) => {
    const { id } = req.params;
    const product = await Product.findByIdAndUpdate(id, req.body, { runValidators: true });
    res.redirect(`/products/${product._id}`)
})

app.delete('/products/:id', async (req, res) => {
    const { id } = req.params;
    const deletedProduct = await Product.findByIdAndDelete(id);
    res.redirect('/products');
})

app.listen(3000, () => {
    console.log('Listening on http://localhost:3000/');
})