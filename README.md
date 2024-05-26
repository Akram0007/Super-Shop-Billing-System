
# Super Shop Billing System

This is a console-based Super Shop Billing System implemented in C++. The application allows users to browse through various categories of items, add items to their cart, view the cart, delete items from the cart, and checkout with a calculated total including VAT.

## Features

- **Categories**: Browse different categories such as Fresh Goods, Frozen, Dairy, Condiments/Spices, Snacks, and Grains.
- **Add Items to Cart**: Add items from each category to the shopping cart with specified quantities.
- **View Cart**: Display all items currently in the shopping cart.
- **Delete Items from Cart**: Remove items from the shopping cart by specifying their position.
- **Checkout**: Calculate the total cost including a 5% VAT and display a detailed bill.
- **Exit**: Quit the application.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., `g++`)

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/Akram0007/Super-Shop-Billing-System.git
    ```

2. Navigate to the project directory:
    ```sh
    cd Super-Shop-Billing-System
    ```

3. Compile the program:
    ```sh
    g++ -o grocery "Supershop Billing System.cpp"
    ```

4. Run the program:
    ```sh
    ./grocery
    ```

## Usage

1. **Main Menu**:
    - Choose an option from the main menu by entering the corresponding number.
    - Options:
        - `1. Categories`: Browse and add items from different categories.
        - `2. Go to cart`: View all items currently in the cart.
        - `3. Delete product`: Remove an item from the cart.
        - `4. Check out`: Calculate and display the total cost including VAT.
        - `5. Quit`: Exit the application.

2. **Categories**:
    - After selecting "Categories" from the main menu, choose a specific category to view available items.
    - Enter the number corresponding to an item to add it to the cart, followed by the quantity.
    - Press `0` to stop adding items and return to the categories menu.

3. **Cart**:
    - View all items in the cart with their quantities and total price.

4. **Delete Product**:
    - Enter the number corresponding to the item in the cart to remove it.
    - Press `0` to exit the deletion menu.

5. **Checkout**:
    - View a detailed bill with itemized costs, gross amount, VAT, and net amount.
    - The total cost is reset after checkout.

## Contributing

Contributions are welcome! Please fork the repository and submit pull requests for any features or bug fixes.

## License

This project is licensed under the MIT License.

## Contact

For any questions or feedback, please open an issue on the [GitHub repository](https://github.com/Akram0007/Super-Shop-Billing-System).
