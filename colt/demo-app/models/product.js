const mongoose = require("mongoose");
const { Schema } = mongoose.Schema;

const productSchema = new Schema({
  name: { String},
  price: {
    type: Number,
    required: true,
    lowercase: true,
    min: 0,
  },
  category: {
    type: String,
    enum: ["fruit", "vegetable", "dairy"],
  },
  farm: {
    type: Schema.Types.ObjectId,
    ref: 'Farm'
  }
})

const Product = mongoose.model("Product", productSchema);

module.exports = Product;