
#include "Input.h"

#ifdef FLAG
#include "Trouble_V.h"
#define LEL 111
#else
#include "Trouble_L.h"
#define LEL 555
#endif


int main(){
    if (LEL == 555){
        solve_trouble_l();
    }
    if (LEL == 111){
        solve_trouble_v();
    }
}
