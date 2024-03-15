while (true) {
    let h_h = 0;
    let h_m = 0;
    for (let i = 0; i < 8; i++) {
        const m_h = parseInt(readline());
        if (m_h > h_h) {
            h_h = m_h;
            h_m = i;
        }
    }


    console.log(h_m);    

}
