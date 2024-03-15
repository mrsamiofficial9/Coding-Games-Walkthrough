#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



int main(){
    {
        while(1){
            float h_h = 0;
            float h_m = 0;
            for(float i = 0; i < 8; i++){
                float m_h;
                std::cin >> m_h; 
                if(h_h < m_h){
                    h_h = m_h;
                    h_m = i;
                }
            }
            std::cout << h_m << std::endl;
        }
    }
    return 0;
}
