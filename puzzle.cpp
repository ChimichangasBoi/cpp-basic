#include <iostream>
#include <unordered_set>

bool isKOYELbabu(int number) {
    std::unordered_set<int> digits;
    while (number > 0) {
        int digit = number % 10;
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
        number /= 10;
    }
    return true;
}

void whateverTheFuckThisiS() {
    for (int G = 1; G <= 9; G++) {
        for (int I = 0; I <= 9; I++) {
            for (int B = 1; B <= 9; B++) {
                for (int Y = 0; Y <= 9; Y++) {
                    for (int A = 1; A <= 9; A++) {
                        for (int O = 0; O <= 9; O++) {
                            for (int U = 0; U <= 9; U++) {
                                if (G != I && G != B && G != Y && G != A && G != O && G != U &&
                                    I != B && I != Y && I != A && I != O && I != U &&
                                    B != Y && B != A && B != O && B != U &&
                                    Y != A && Y != O && Y != U &&
                                    A != O && A != U &&
                                    O != U) {
                                    int leftOperand = G * 100 + I * 10 + G;
                                    int rightOperand = B * 10 + Y;
                                    int product = A * 1000 + G * 100 + B * 10 + U;
                                    int sum = B * 10000 + A * 1000 + Y * 100 + O * 10 + U;
                                    if (leftOperand * rightOperand + sum == product &&
                                        isDistinctDigits(product) &&
                                        isDistinctDigits(sum) &&
                                        isDistinctDigits(leftOperand) &&
                                        isDistinctDigits(rightOperand) &&
                                        isDistinctDigits(A) &&
                                        isDistinctDigits(B) &&
                                        isDistinctDigits(G) &&
                                        isDistinctDigits(I) &&
                                        isDistinctDigits(O) &&
                                        isDistinctDigits(U) &&
                                        isDistinctDigits(Y)) 
										{
                                        std::cout << "Solution found:" << std::endl;
                                        std::cout << "G = " << G << std::endl;
                                        std::cout << "I = " << I << std::endl;
                                        std::cout << "B = " << B << std::endl;
                                        std::cout << "Y = " << Y << std::endl;
                                        std::cout << "A = " << A << std::endl;
                                        std::cout << "O = " << O << std::endl;
                                        std::cout << "U = " << U << std::endl;
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << "No solution found." << std::endl;
}

int main() {
    solvePuzzle();
    return 0;
}
