import axios from "axios";

const searchImages = async (term) => {
  const response = await axios.get("https://api.unsplash.com/search/photos", {
    headers: {
      Authorization: "Client-ID 66n5tVW9Q7QK-u-BjKdbqRv6OHGGyJeicfaV4LBRdYTtI47",
    },
    params: {
        query: term
    },
  });

  return response.data.results;
};

export default searchImages;
