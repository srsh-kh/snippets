const express = require("express");
const app = express();
const morgan = require("morgan");

const AppError = require("./AppError");

app.use(morgan("tiny"))

// app.use((req, res ,next) => {
//     console.log("First Middleware")
//     return next();
//     console.log("After next")
// });

// app.use((req, res ,next) => {
//     console.log("Second Middleware")
//     return next();
// });
// app.use((req, res, next) => {
//     const { password } = req.query;
//     if (password ==='pass') {
//         next();
//     }
//     res.send("Enter pass");
// })
const verifyPassword = (req, res, next) => {
    const { password } = req.query;
    if (password ==='pass') {
        next();
    }
    throw new AppError("password required", 401);
    // res.send("Enter pass");
}

app.get("/", (req, res) => {
    res.send("HOME");
})

app.get("/error", (req, res) => {
    chicken.fly()
})

app.get("/dogs", (req, res) => {
    res.send("WOOF WOOF")
})

app.get('/secret', verifyPassword, (req, res) => {
    res.send('My Secret: 1+1=3')
})

app.use((req, res) => {
    res.status(404).send("Not Found")
})

// app.use((err, req, res, next) => {
//     console.log("****************************")
//     console.log("**********ERROR*************")
//     console.log("****************************")
//     // res.status(500).send("ERRORRRRRRRRR FOUND")
//     next(err);
// })



app.listen(3000, () => {
    console.log("Running on http://localhost:3000/")
})