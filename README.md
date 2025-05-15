# printf_42
📋 Overview
ft_printf is a custom implementation of the C standard library function printf(). This project recreates the powerful formatting capabilities of the original while adhering to strict memory management principles, making it an excellent alternative to the standard library function.
✨ Features

Complete Format Support - Handles all standard printf format specifiers
Custom Memory Management - Zero memory leaks with efficient allocation
Modular Design - Well-structured and maintainable code architecture
Error Handling - Robust handling of edge cases and invalid inputs
Library Integration - Easy to incorporate into other C projects

🛠️ Supported Format Specifiers

  - %c : Characterft_printf("%c", 'X') → X
  - %s : Stringft_printf("%s", "hello") → hello
  - %p : Pointer addressft_printf("%p", ptr) → 0x7ffeef
  - %d : Decimal (base 10) integerft_printf("%d", 42) → 42
  - %i : Integerft_printf("%i", 42) → 42
  - %u : Unsigned decimalft_printf("%u", 42) → 42
  - %x : Hexadecimal (lowercase)ft_printf("%x", 42) → 2a
  - %X : Hexadecimal (uppercase)ft_printf("%X", 42) → 2A
  - %% : Percent signft_printf("%%") → %

🧠 Implementation Details
  This implementation uses variadic functions to handle multiple arguments and a modular approach with separate handlers for each format specifier. Key components include:

  Parser: Analyzes format strings to identify specifiers
  Dispatcher: Routes to appropriate handler functions
  Handlers: Specialized functions for each format specifier
  Buffer Management: Optimized output handling

📊 Performance
  Optimized for:

    Speed (minimal processing overhead)
    Memory usage (efficient allocation)
    Code maintainability (clear structure)
