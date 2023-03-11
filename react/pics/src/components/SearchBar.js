function SearchBar({ onSubmit }) {
  const handleClick = () => {
    onSubmit("cars");
  };

  return (
    <div>
      <input />
      <button onClick={handleClick}>Click this</button>
    </div>
  );
}

export default SearchBar;
