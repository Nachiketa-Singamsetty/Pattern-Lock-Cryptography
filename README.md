# Pattern Lock Cryptography

Pattern Lock Cryptography is a C++ implementation of text encoding and decoding using unique matrix-based encryption patterns. The project provides multiple encryption schemes to secure textual data effectively.

## Features

- **Customizable Patterns**: Eight distinct encryption patterns for encoding and decoding.
- **Matrix-Based Encryption**: Uses predefined matrices to rearrange characters in the input text for encryption.
- **Dual Modes**: Supports both **encoding** and **decoding** operations.
- **User-Friendly**: Simple console interface for selecting patterns and inputting text.

## How It Works

### Encoding
1. The user selects an encryption pattern (1–8).
2. The input text is processed into blocks of specific lengths corresponding to the chosen pattern.
3. Characters are rearranged based on a matrix and then concatenated to form the encrypted output.

### Decoding
1. The user selects the decryption pattern matching the encoding pattern.
2. The encoded text is processed in reverse using the matrix and key for character rearrangement.
3. The original text is reconstructed.

## Available Patterns

| Pattern | Block Size | Description                            |
|---------|------------|----------------------------------------|
| 1       | 10         | 4x4 matrix with a leftover character. |
| 2       | 13         | 5x5 matrix with character offsets.    |
| 3       | 13         | Matrix with diagonal placements.      |
| 4       | 16         | Complex matrix for larger blocks.     |
| 5       | 8          | Smaller blocks for compact encoding.  |
| 6       | 15         | Extended 5x5 matrix.                  |
| 7       | 12         | Matrix with circular placements.      |
| 8       | 12         | Alternative 5x5 pattern.              |

## Prerequisites

- C++ Compiler (e.g., GCC, Clang)
- Basic knowledge of C++ and console applications.

## Usage

1. Clone the repository:
   ```bash or clone it through VSCode
   git clone https://github.com/yourusername/pattern-lock-cryptography.git
   cd pattern-lock-cryptography
