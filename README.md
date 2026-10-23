# CRM System for Computer Shop

A desktop CRM application designed for managing computer shop operations, products, and administrative tasks. Built using **C++ CLI (.NET Windows Forms)** and driven by a local **SQLite** database, this application features a user-friendly graphical interface for catalog browsing, product management, and data handling.

## 🚀 Features

- **Splash Screen:** Elegant loading screen at application startup.
- **Product Catalog:** Interactive product grid and list view for easy browsing.
- **Product Cards:** Detailed views for specific items, including photo viewing capabilities (`PhotoView`).
- **Admin Panel:** Secure management dashboard to add, edit, or delete items and control store data.
- **Database Integration:** Powered by `dbManager` utilizing local SQLite databases (`products.db`, `test.db`) for lightweight and fast data persistence.

## 🛠️ Tech Stack & Prerequisites

- **Language:** C++ CLI (Common Language Infrastructure)
- **Framework:** .NET Windows Forms
- **Database:** SQLite (managed via SQLite NuGet packages)
- **IDE:** Visual Studio (2019 / 2022 recommended) with ".NET Desktop Development" and "Desktop Development with C++" workloads installed.

## 📂 Project Structure (Inside `/test`)

- `MyForm.h / .cpp` — The main entry point and landing form of the application.
- `AdminPanel.h / .cpp` — Backend panel for catalog and stock management.
- `Catalog.h / .cpp` — Grid/list visualization of the items.
- `ProductCard.h` & `Product.h` — Data structures and UI layouts representing specific items.
- `dbManager.h` — Centralized database helper for executing SQL queries.
- `*.resx` — UI layout and resource files for form localization and visual controls.

## 📸 Screenshots

*Screenshots will be uploaded soon.*
<!-- 
Uncomment and update links once screenshots are pushed to GitHub:
### Main Interface
![Catalog Screen](screenshots/catalog.png)

### Admin Dashboard
![Admin Panel](screenshots/admin.png)
-->

## ⚙️ Installation & Running the Project

1. **Clone the repository:**
   ```bash
   git clone https://github.com
   ```
2. Open **Visual Studio**.
3. Go to `File` -> `Open` -> `Project/Solution` and select the `test.vcxproj` file located inside the `test` directory.
4. Restore NuGet packages if prompted (for the SQLite configurations defined in `packages.config`).
5. Set the build configuration to `x64` or `x86` (depending on your SQLite DLLs architecture).
6. Press **F5** to build and run the project.
