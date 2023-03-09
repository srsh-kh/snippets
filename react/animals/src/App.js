import './App.css';
import { useState } from "react";
import AnimalShow from "./AnimalShow";

function getRandomAnimal() {
  const animals = ['bird', 'cat', 'cow', 'dog', 'gator', 'horse'];

  return animals[Math.floor(Math.random() * animals.length)];
}

// console.log(getRandomAnimal());

// function useState(defaultValue) {
//   return {
//     yourState: defaultValue,
//     yourSetter: () => {}
//   };
// }

// function App() {
//   function makeArray() {
//     return [1, 2, 10, 564];
//   }

// const myArray = makeArray();
// const firstElement = myArray[0];
// const secondElement = myArray[1];
//   const [firstElement, secondElement] = makeArray();
//   console.log(firstElement, secondElement);
// }

function App() {
  const [animals, setAnimals] = useState([]);
  // const [count, setCount] = useState(0);
  // const {yourState: count, yourSetter: setCount} = useState(0);
  // const stateConfig = useState("0");
  // const count = stateConfig.yourState;
  // const setCount = stateConfig.yourSetter;
  // const [count, setCount] = useState(0);
  // const [value, setValue] = useState(0);

  // console.log(useState(50));

  const handleClick = () => {
    setAnimals([...animals, getRandomAnimal()]);
    // setCount(count + 1);
  };

  const renderedAnimals = animals.map((animal, index) => {
    return <AnimalShow type={animal} key={index} />;
  });

  return (
    <div className='app'>
      <button onClick={handleClick}>Add Animal</button>
      <div className='animal-list'>{renderedAnimals}</div>
      {/* <div>Number of Animals: {count}</div> */}
    </div>
  );
}

export default App;
