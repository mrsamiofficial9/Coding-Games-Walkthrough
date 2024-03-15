while true; do
    h_h=0;
    h_m=0;
    for (( i=0; i<8; i++ )); do
        read -r m_h
        if(($m_h>$h_h)); then
             h_h=$m_h
             h_m=$i
        fi
    done

    echo $h_m 
done
