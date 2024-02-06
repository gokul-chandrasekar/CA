#include <stdio.h>
float predict(float x, float m, float c) {
    return m * x + c;
}

int main() {
    float m, c, x, predicted_y;
    
    m = 2.0;
    c = 3.0;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    predicted_y = predict(x, m, c);
    
    printf("Predicted y = %.2f\n", predicted_y);
    
    return 0;
}
