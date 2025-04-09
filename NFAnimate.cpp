#include "emp/web/Animate.hpp"
#include "emp/web/web.hpp"

emp::web::Document doc{"target"};

class NFAnimator : public emp::web::Animate {
    emp::web::Canvas canvas{100, 100, "canvas"};
    
    public: 

     NFAnimator() {
         doc << canvas;
         for(int x = 0; x < 10; x++) {
            for(int y = 0; y < 10; y++) {
                canvas.Rect(x*10, y*10, 10, 10, "white", "black");
            }
         }

     }
     void FindNeighbors(x, y){
        
     }
};



NFAnimator animator;



int main() {
    animator.Step();
}