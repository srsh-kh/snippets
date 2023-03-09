with open("url.txt", "r") as file:
    lines = file.readlines()

mp4_urls = []
for line in lines:
    if line.startswith("https") and line.endswith(".mp4\n"):
        mp4_urls.append(line.strip())

html_content = "<html>\n<body>\n"
for mp4_url in mp4_urls:
    html_content += "<p><a href='" + mp4_url + "'>" + mp4_url + "</a></p>\n"
html_content += "</body>\n</html>"

with open("output.html", "w") as file:
    file.write(html_content)
