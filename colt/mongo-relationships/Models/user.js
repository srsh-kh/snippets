const mongoose = require('mongoose');

mongoose.connect('mongodb://0.0.0.0:27017/relationshipDemo')
    .then(() => {
        console.log('Connection Established with MongoDB');
    })
    .catch(err => {
        console.log('MongoDB Connection Error!')
        console.log(err);
    })

    const userSchema = new mongoose.Schema({
        first: String,
        last: String,
        addresses: [
            {
                _id: {id: false},
                street: String,
                city: String,
                state: String,
                country: String,
            }
        ]
    })

    const User = mongoose.model("User", userSchema)

    const makeUser = async () => {
        const u = new User({
            first: 'Harry',
            last: "Potter",
        })
        u.addresses.push({
            street: '123 Sesame St.',
            city: "New York",
            state: "NY",
            country: "USA",
        })
        const res = await u.save()
        console.log(res)
    }

    const addAddress = async (id) => {
        const user = await User.findById(id);
        user.addresses.push(
            {
                street: '123 Sesame St.',
                city: "New York",
                state: "NY",
                country: "USA"
            }
        )
        const res = await user.save()
        console.log(res);    
    }

   addAddress('63d17d4e75d69ed16db61d44')