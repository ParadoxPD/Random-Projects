const codes = document.querySelectorAll("pre")

console.log(codes)

codes.forEach((codeBlock) => {
    let htmlCode = codeBlock.innerHTML
    console.log(htmlCode)
    htmlCode += '<button onclick=\"copyCode(this)\">copy</button>'
    codeBlock.innerHTML = htmlCode
});

function copyCode(event) {
    let codeSnippet = event.parentElement.querySelector('code').innerText
    console.log(codeSnippet)
}