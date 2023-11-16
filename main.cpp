#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int choice,patternC;
    string input, line, encoded, decoded, leftOver;

    cout << "1. Encode\n2. Decode" << endl;
    cout << "Enter your choice:" << endl;
    cin >> choice;

    if (choice == 1) {

        cout << "\n1. Pattern-1 (10)\n2. Pattern-2 (13)\n3. Pattern-3 (13)\n4. Pattern-4 (16)\n5. Pattern-5 (8)\n6. Pattern-6 (15)\n7. Pattern-7 (12)\n8. Pattern-8 (12)" << endl;
        cout << "Choose a pattern: ";
        cin >> patternC;
        cin.ignore();

        if (patternC == 1) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 10 != 0) {
                int x = lengthInput % 10;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 10;




            int matrix[4][4] = {
                    {4, 0, 0, 10},
                    {3, 5, 0, 9},
                    {2, 0, 6, 8},
                    {1, 0, 0, 7}
            };

            char charMatrix[4][4];


            while (lengthInput >= 10) {
                string temp;
                string tempInput = input.substr(indexE, indexE + 10);

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }



                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 10;
                lengthInput -= 10;

            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 2) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 13 != 0) {
                int x = lengthInput % 13;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 13;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(5, vector<char>(5)));
            int arrayCharIndex = 0;


            int matrix[5][5] = {
                    {1, 0, 0, 0, 13},
                    {2, 0, 0, 0, 12},
                    {3, 0, 7, 0, 11},
                    {4, 6, 0, 8, 10},
                    {5, 0, 0, 0, 9}
            };

            char charMatrix[5][5];
            while (lengthInput >= 13) {
                string temp;
                string tempInput = input.substr(indexE, indexE+13);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 13;
                lengthInput -= 13;
                arrayCharIndex += 1;
            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 3) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 13 != 0) {
                int x = lengthInput % 13;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 13;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(5, vector<char>(5)));
            int arrayCharIndex = 0;


            int matrix[5][5] = {
                    {0, 3, 8, 0, 0},
                    {0, 12, 0, 2, 7},
                    {4, 1, 0, 11, 0},
                    {0, 13, 0, 6, 10},
                    {0, 5, 9, 0, 0}
            };

            char charMatrix[5][5];
            while (lengthInput >= 13) {
                string temp;
                string tempInput = input.substr(indexE, indexE+13);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 13;
                lengthInput -= 13;
                arrayCharIndex += 1;
            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 4) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 16 != 0) {
                int x = lengthInput % 16;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 16;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(5, vector<char>(5)));
            int arrayCharIndex = 0;


            int matrix[5][5] = {
                    {1, 13, 0, 8, 10},
                    {2, 0, 5, 0, 0},
                    {0, 16, 6, 15, 11},
                    {3, 0, 7, 0, 0},
                    {4, 14, 0, 9, 12 }
            };

            char charMatrix[5][5];
            while (lengthInput >= 16) {
                string temp;
                string tempInput = input.substr(indexE, indexE+16);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 16;
                lengthInput -= 16;
                arrayCharIndex += 1;
            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 5) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 8 != 0) {
                int x = lengthInput % 8;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 8;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(4, vector<char>(4)));
            int arrayCharIndex = 0;


            int matrix[4][4] = {
                    {4, 2, 0, 0},
                    {8, 5, 0, 0},
                    {0, 0, 1, 7},
                    {0, 3, 6, 0}
            };

            char charMatrix[4][4];
            while (lengthInput >= 8) {
                string temp;
                string tempInput = input.substr(indexE, indexE+8);

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 8;
                lengthInput -= 8;
                arrayCharIndex += 1;
            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 6) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 15 != 0) {
                int x = lengthInput % 15;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 15;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(5, vector<char>(5)));
            int arrayCharIndex = 0;


            int matrix[5][5] = {
                    {14, 0, 10, 0, 15},
                    {0, 2, 6, 3, 0},
                    {11, 9, 1, 7, 13},
                    {0, 5, 8, 4, 0},
                    {0, 0, 12, 0, 0}
            };

            char charMatrix[5][5];
            while (lengthInput >= 15) {
                string temp;
                string tempInput = input.substr(indexE, indexE+15);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 15;
                lengthInput -= 15;
                arrayCharIndex += 1;
            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 7) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 12 != 0) {
                int x = lengthInput % 12;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 12;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(5, vector<char>(5)));
            int arrayCharIndex = 0;


            int matrix[5][5] = {
                    {8, 11, 0, 12, 5},
                    {0, 0, 4, 0, 0},
                    {3, 0, 0, 0, 7},
                    {0, 0, 2, 0, 0},
                    {6, 9, 0, 10, 1}
            };

            char charMatrix[5][5];
            while (lengthInput >= 12) {
                string temp;
                string tempInput = input.substr(indexE, indexE+12);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 12;
                lengthInput -= 12;

            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else if (patternC == 8) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexE = 0;

            if (lengthInput % 12 != 0) {
                int x = lengthInput % 12;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 12;

            using Matrix = vector<vector<char>>;
            vector<Matrix> arrayOfCharMatrices(N, Matrix(5, vector<char>(5)));
            int arrayCharIndex = 0;


            int matrix[5][5] = {
                    {12, 0, 0, 0, 7},
                    {9, 0, 0, 2, 4},
                    {6, 0, 11, 0, 0},
                    {0, 3, 8, 1, 0},
                    {0, 0, 5, 0, 10}
            };

            char charMatrix[5][5];
            while (lengthInput >= 12) {
                string temp;
                string tempInput = input.substr(indexE, indexE+12);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        arrayOfCharMatrices[arrayCharIndex][i][j] = charMatrix[i][j];
                    }
                }

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        if (tempInput.find(ch) != string::npos) {
                            temp += ch;
                        }
                    }
                }

                encoded += temp;
                indexE += 12;
                lengthInput -= 12;
                arrayCharIndex += 1;
            }

            encoded += leftOver;
            cout << "\nEncoded: " << encoded << endl;

        } else {
            cout << "Invalid Choice" << endl;
        }
    } else if (choice == 2) {
        cout << "\n1. Pattern-1\n2. Pattern-2\n3. Pattern-3\n4. Pattern-4\n5. Pattern-5\n6. Pattern-6\n7. Pattern-7\n8. Pattern-8" << endl;
        cout << "Choose a pattern: ";
        cin >> patternC;
        cin.ignore();
        if (patternC == 1) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }

            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 10 != 0) {
                int x = lengthInput % 10;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 10;

            int matrix[4][4] = {
                    {1, 0, 0, 2},
                    {3, 4, 0, 5},
                    {6, 0, 7, 8},
                    {9, 0, 0, 10}
            };
            int key[4][4] = {
                    {4, 0, 0, 10},
                    {3, 5, 0, 9},
                    {2, 0, 6, 8},
                    {1, 0, 0, 7}
            };


            char charMatrix[4][4];

            while (lengthInput >= 10) {
                char temp[11];
                temp[10] = NULL;
                string tempInput = input.substr(indexD, indexD + 10);

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        char ch = charMatrix[i][j];
                         int pos = key[i][j];

                        temp[pos - 1] = ch;
                    }
                }

                decoded += temp;
                indexD += 10;
                lengthInput -= 10;

            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else if (patternC == 2) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 13 != 0) {
                int x = lengthInput % 13;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 13;

            int matrix[5][5] = {
                    {1, 0, 0, 0, 2},
                    {3, 0, 0, 0, 4},
                    {5, 0, 6, 0, 7},
                    {8, 9, 0, 10, 11},
                    {12, 0, 0, 0, 13}
            };
            int key[5][5] = {
                    {1, 0, 0, 0, 13},
                    {2, 0, 0, 0, 12},
                    {3, 0, 7, 0, 11},
                    {4, 6, 0, 8, 10},
                    {5, 0, 0, 0, 9}
            };


            char charMatrix[5][5];

            while (lengthInput >= 13) {
                char temp[14];
                temp[13] = NULL;
                string tempInput = input.substr(indexD, indexD + 13);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 13;
                lengthInput -= 13;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else if (patternC == 3) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 13 != 0) {
                int x = lengthInput % 13;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 13;

            int matrix[5][5] = {
                    {0, 1, 2, 0, 0},
                    {0, 3, 0, 4, 5},
                    {6, 7, 0, 8, 0},
                    {0, 9, 0, 10, 11},
                    {0, 12, 13, 0, 0}
            };
            int key[5][5] = {
                    {0, 3, 8, 0, 0},
                    {0, 12, 0, 2, 7},
                    {4, 1, 0, 11, 0},
                    {0, 13, 0, 6, 10},
                    {0, 5, 9, 0, 0}
            };


            char charMatrix[5][5];

            while (lengthInput >= 13) {
                char temp[14];
                temp[13] = NULL;
                string tempInput = input.substr(indexD, indexD + 13);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 13;
                lengthInput -= 13;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else if (patternC == 4) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 16 != 0) {
                int x = lengthInput % 16;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 16;

            int matrix[5][5] = {
                    {1, 2, 0, 3, 4},
                    {5, 0, 6, 0, 0},
                    {0, 7, 8, 9, 10},
                    {11, 0, 12, 0, 0},
                    {13, 14, 0, 15, 16 }
            };
            int key[5][5] = {
                    {1, 13, 0, 8, 10},
                    {2, 0, 5, 0, 0},
                    {0, 16, 6, 15, 11},
                    {3, 0, 7, 0, 0},
                    {4, 14, 0, 9, 12 }
            };


            char charMatrix[5][5];

            while (lengthInput >= 16) {
                char temp[17];
                temp[16] = NULL;
                string tempInput = input.substr(indexD, indexD + 16);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 16;
                lengthInput -= 16;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else if (patternC == 5) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 8 != 0) {
                int x = lengthInput % 8;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 8;

            int matrix[4][4] = {
                    {1, 2, 0, 0},
                    {3, 4, 0, 0},
                    {0, 0, 5, 6},
                    {0, 7, 8, 0}
            };
            int key[4][4] = {
                    {4, 2, 0, 0},
                    {8, 5, 0, 0},
                    {0, 0, 1, 7},
                    {0, 3, 6, 0}
            };


            char charMatrix[4][4];

            while (lengthInput >= 8) {
                char temp[9];
                temp[8] = NULL;
                string tempInput = input.substr(indexD, indexD + 8);

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 8;
                lengthInput -= 8;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;
        } else if (patternC == 6) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 15 != 0) {
                int x = lengthInput % 15;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 15;

            int matrix[5][5] = {
                    {1, 0, 2, 0, 3},
                    {0, 4, 5, 6, 0},
                    {7, 8, 9, 10, 11},
                    {0, 12, 13, 14, 0},
                    {0, 0, 15, 0, 0}
            };
            int key[5][5] = {
                    {14, 0, 10, 0, 15},
                    {0, 2, 6, 3, 0},
                    {11, 9, 1, 7, 13},
                    {0, 5, 8, 4, 0},
                    {0, 0, 12, 0, 0}
            };


            char charMatrix[5][5];

            while (lengthInput >= 15) {
                char temp[16];
                temp[15] = NULL;
                string tempInput = input.substr(indexD, indexD + 15);


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 15;
                lengthInput -= 15;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else if (patternC == 7) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 12 != 0) {
                int x = lengthInput % 12;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 12;

            int matrix[5][5] = {
                    {1, 2, 0, 3, 4},
                    {0, 0, 5, 0, 0},
                    {6, 0, 0, 0, 7},
                    {0, 0, 8, 0, 0},
                    {9, 10, 0, 11, 12}
            };
            int key[5][5] = {
                    {8, 11, 0, 12, 5},
                    {0, 0, 4, 0, 0},
                    {3, 0, 0, 0, 7},
                    {0, 0, 2, 0, 0},
                    {6, 9, 0, 10, 1}
            };


            char charMatrix[5][5];

            while (lengthInput >= 12) {
                char temp[13];
                temp[12] = NULL;
                string tempInput = input.substr(indexD, indexD + 12);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 12;
                lengthInput -= 12;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else if (patternC == 8) {
            cout << "Enter the text: ";
            while (getline(cin, line)) {
                if (line.empty()) {
                    break;
                }
                input += line + "\n";
            }


            int lengthInput = input.length();
            int indexD = 0;

            if (lengthInput % 12 != 0) {
                int x = lengthInput % 12;
                int startPos = lengthInput - x;
                leftOver = input.substr(startPos);
            }

            int N = lengthInput / 12;

            int matrix[5][5] = {
                    {1, 0, 0, 0, 2},
                    {3, 0, 0, 4, 5},
                    {6, 0, 7, 0, 0},
                    {0, 8, 9, 10, 0},
                    {0, 0, 11, 0, 12}
            };
            int key[5][5] = {
                    {12, 0, 0, 0, 7},
                    {9, 0, 0, 2, 4},
                    {6, 0, 11, 0, 0},
                    {0, 3, 8, 1, 0},
                    {0, 0, 5, 0, 10}
            };


            char charMatrix[5][5];

            while (lengthInput >= 12) {
                char temp[13];
                temp[12] = NULL;
                string tempInput = input.substr(indexD, indexD + 12);

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        charMatrix[i][j] = tempInput[matrix[i][j] - 1];
                    }
                }


                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        char ch = charMatrix[i][j];
                        int pos = key[i][j];
                        temp[pos - 1] = ch;
                    }
                }
                decoded += temp;
                indexD += 12;
                lengthInput -= 12;
            }

            decoded += leftOver;
            cout << "\nDecoded: " << decoded << endl;

        } else {
            cout << "Invalid Choice" << endl;
        }
    } else {
        cout << "Invalid Choice" << endl;
    }
}
