const codes = document.querySelectorAll("pre")

console.log(codes)

codes.forEach((codeBlock) => {
    let htmlCode = codeBlock.innerHTML
    console.log(htmlCode)
    htmlCode += `
        <button class=\"button\" onclick=\"copyCode(this)\">
            <svg version="1.1" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512" xmlns:xlink="http://www.w3.org/1999/xlink" enable-background="new 0 0 512 512" style="display: block;" transform="scale(0.65)">
                <g>
                    <g>
                    <path fill="000000" d="M480.6,109.1h-87.5V31.4c0-11.3-9.1-20.4-20.4-20.4H31.4C20.1,11,11,20.1,11,31.4v351c0,11.3,9.1,20.4,20.4,20.4h87.5    v77.7c0,11.3,9.1,20.4,20.4,20.4h341.3c11.3,0,20.4-9.1,20.4-20.4v-351C501,118.3,491.9,109.1,480.6,109.1z M51.8,362V51.8h300.4    v57.3H139.3c-11.3,0-20.4,9.1-20.4,20.4V362H51.8z M460.2,460.2H159.7V150h300.4V460.2z"/>
                    <path fill="000000" d="m233.3,254.4h155.8c11.3,0 20.4-9.1 20.4-20.4 0-11.3-9.1-20.4-20.4-20.4h-155.8c-11.3,0-20.4,9.1-20.4,20.4 0,11.2 9.1,20.4 20.4,20.4z"/>
                    <path d="m233.3,396.6h155.8c11.3,0 20.4-9.1 20.4-20.4 0-11.3-9.1-20.4-20.4-20.4h-155.8c-11.3,0-20.4,9.1-20.4,20.4 0,11.3 9.1,20.4 20.4,20.4z"/>
                    </g>
                </g>
            </svg>
        </button>
        
    `
    codeBlock.innerHTML = htmlCode
});

function copyCode(event) {
    const codeBlock = event.parentElement;
    let codeSnippet = codeBlock.querySelector('code').innerText;
    console.log(codeSnippet);
    const cb = navigator.clipboard;
    cb.writeText(codeSnippet).then(() => alert('Text copied'));
}