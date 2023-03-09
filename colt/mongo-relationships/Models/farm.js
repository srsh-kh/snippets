const mongoose = require('mongoose');
const { Schema } = mongoose;

mongoose.connect('mongodb://0.0.0.0:27017/relationshipDemo')
    .then(() => {
        console.log('Connection Established with MongoDB');
    })
    .catch(err => {
        console.log('MongoDB Connection Error!')
        console.log(err);
    })

const productSchema = new Schema({
    name: String,
    price: Number,
    season: {
        type: String,
        enum: ["Spring", "Summer", "Fall", "Winter",]
    }
});

const farmSchema = new Schema({
    name: String,
    city: String,
    products: [{ type: Schema.Types.ObjectId, ref: 'Product' }]
})

const Product = mongoose.model("Product", productSchema);
const Farm = mongoose.model("Farm", farmSchema);

// Product.insertMany([
//     { name: 'Goddess Melon', price: 4.99, season: 'Summer' },
//     { name: "Sugar Baby Watermelon", price:4.99, season: "Summer" },
//     { name:"Asparagus", price: 3.99, season: 'Spring'}
// ])

const makeFarm = async () => {
    const farm = new Farm({ name: 'Full Belly Farms', city: 'Guinda, CA' });
    const melon = await Product.findOne({ name: "Goddess Melon" });
    farm.products.push(melon)
    await farm.save()
    console.log(farm); 
}
makeFarm();

