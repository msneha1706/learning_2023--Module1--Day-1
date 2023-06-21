#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

void readComplex(Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &c->real);
    
    printf("Enter the imaginary part: ");
    scanf("%f", &c->imag);
}

void writeComplex(Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    Complex c1, c2, sum, product;
    
    printf("Enter the first complex number:\n");
    readComplex(&c1);
    
    printf("Enter the second complex number:\n");
    readComplex(&c2);
    
    printf("\n");
    
    printf("First complex number:\n");
    writeComplex(c1);
    
    printf("Second complex number:\n");
    writeComplex(c2);
    
    sum = addComplex(c1, c2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);
    
    product = multiplyComplex(c1, c2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);
    
    return 0;
}

