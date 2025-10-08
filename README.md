# 🗂️ Data Structures in C

<div align="center">

![C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![GitHub Stars](https://img.shields.io/github/stars/ggauravky/Data-Structure-using-C?style=for-the-badge&logo=github)
![GitHub Forks](https://img.shields.io/github/forks/ggauravky/Data-Structure-using-C?style=for-the-badge&logo=github)

**A comprehensive collection of C language implementations of various data structures and algorithms**

*Perfect for students, developers, and anyone looking to master data structures fundamentals*

</div>

---

## 📋 Table of Contents

- [🚀 Features](#-features)
- [📊 Data Structures Covered](#-data-structures-covered)
- [🔍 Algorithms Covered](#-algorithms-covered)
- [📁 Repository Structure](#-repository-structure)
- [⚡ Quick Start](#-quick-start)
- [📖 File Descriptions](#-file-descriptions)
- [🛠️ Prerequisites](#️-prerequisites)
- [💡 Usage Examples](#-usage-examples)
- [🤝 Contributing](#-contributing)
- [📞 Connect With Me](#-connect-with-me)
- [⭐ Support](#-support)

---

## 🚀 Features

✅ **Well-Documented Code** - Clear, readable implementations with detailed comments  
✅ **Multiple Data Structures** - Arrays, Linked Lists, Stacks, and more  
✅ **Essential Algorithms** - Searching, sorting, and traversal algorithms  
✅ **Educational Focus** - Perfect for learning and understanding concepts  
✅ **Production Ready** - Optimized and tested implementations  

---

## 📊 Data Structures Covered

### 🗃️ **Arrays**
- Basic array operations and manipulations
- Dynamic array handling
- Multi-dimensional array concepts

### 🔗 **Linked Lists**
- **Singly Linked Lists** - Forward traversal and basic operations
- **Doubly Linked Lists** - Bidirectional traversal capabilities  
- **Circular Linked Lists** - Circular reference implementations

### 📚 **Stacks**
- Array-based stack implementation
- Dynamic stack operations
- Stack applications and use cases

### 👉 **Pointers**
- Pointer fundamentals and advanced concepts
- Memory management techniques

---

## 🔍 Algorithms Covered

### 🔎 **Searching Algorithms**
- **Linear Search** - Sequential element searching
- **Binary Search** - Efficient searching in sorted arrays

### 📝 **Array Operations**
- **Insertion** - Adding elements at specific positions
- **Deletion** - Removing elements from arrays  
- **Traversal** - Iterating through array elements

### 🔗 **Linked List Operations**
- **Insertion** - At beginning, index, end, or after specific nodes
- **Deletion** - First, at index, last, or by value
- **Traversal** - Forward and backward traversal methods

---

## 📁 Repository Structure

```
📦 Data-Structure-using-C/
├── 📄 README.md
├── 📂 001 Arrays/
│   ├── 🔍 Binary_search.c
│   ├── ❌ deletion_array.c
│   ├── ➕ insertion_array.c
│   ├── 🔍 Linear_Search.c
│   └── 🔄 transverse.c
├── 📂 002 Linked List/
│   ├── 📖 1-LinkedLists.pdf
│   ├── 🔄 Circular Linked Lists.c
│   ├── ❌ delete_a_node.c
│   ├── ↔️ Doubly Linked Lists.c
│   ├── ➕ insertion_linked_list.c
│   ├── 🎯 intro_linked_list.c
│   └── 🔄 traverse_create.c
├── 📂 003 Stack/
│   ├── 📚 Implementing Stack using array.c
│   ├── 🎯 introtoStack.c
│   ├── ⚙️ Operations in Stack.c
│   ├── 🔍 Peak Operation.c
│   └── ⬆️⬇️ Push, PopOperationsinStack.c
└── 📂 004 Pointer Revision/
    └── 👉 pointers.c
```

---

## ⚡ Quick Start

### 1️⃣ **Clone the Repository**
```bash
git clone https://github.com/ggauravky/Data-Structure-using-C.git
cd Data-Structure-using-C
```

### 2️⃣ **Choose Your Topic**
```bash
# For Arrays
cd "001 Arrays"

# For Linked Lists  
cd "002 Linked List"

# For Stacks
cd "003 Stack"

# For Pointers
cd "004 Pointer Revision"
```

### 3️⃣ **Compile and Run**
```bash
# Compile
gcc -o program_name source_file.c

# Run
./program_name
```

---

## 📖 File Descriptions

### 🗃️ **Arrays Section**

| File | Description | Key Features |
|------|-------------|--------------|
| `insertion_array.c` | 📝 Element insertion at specified index | Dynamic array handling |
| `deletion_array.c` | 🗑️ Element deletion from specific position | Memory management |
| `transverse.c` | 🔄 Array traversal and display | Efficient iteration |
| `Linear_Search.c` | 🔍 Sequential search implementation | O(n) time complexity |
| `Binary_search.c` | ⚡ Binary search on sorted arrays | O(log n) time complexity |

### 🔗 **Linked List Section**

| File | Description | Key Features |
|------|-------------|--------------|
| `intro_linked_list.c` | 🎯 Basic linked list introduction | Fundamental concepts |
| `traverse_create.c` | 🔄 Creation and traversal demo | Dynamic memory allocation |
| `insertion_linked_list.c` | ➕ Node insertion at various positions | Flexible insertion methods |
| `delete_a_node.c` | ❌ Node deletion operations | Memory deallocation |
| `Circular Linked Lists.c` | 🔄 Circular reference implementation | Continuous traversal |
| `Doubly Linked Lists.c` | ↔️ Bidirectional linked list | Forward/backward traversal |

### 📚 **Stack Section**

| File | Description | Key Features |
|------|-------------|--------------|
| `Implementing Stack using array.c` | 📚 Array-based stack implementation | LIFO operations |
| `Operations in Stack.c` | ⚙️ Complete stack operations | Push, Pop, Peek |
| `Peak Operation.c` | 🔍 Stack top element access | Non-destructive read |
| `Push, PopOperationsinStack.c` | ⬆️⬇️ Core stack operations | Stack manipulation |

---

## 🛠️ Prerequisites

### **Required Software**
- **GCC Compiler** or any C compiler
- **Text Editor** (VS Code, Code::Blocks, etc.)
- **Terminal/Command Prompt**

### **Installation Guide**

#### **Windows** 🪟
```bash
# Install MinGW or use Visual Studio
winget install MinGW.MinGW
```

#### **Linux** 🐧
```bash
# Ubuntu/Debian
sudo apt-get update
sudo apt-get install gcc

# CentOS/RHEL
sudo yum install gcc
```

#### **macOS** 🍎
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Or use Homebrew
brew install gcc
```

---

## 💡 Usage Examples

### **Compiling and Running Array Programs**
```bash
# Navigate to Arrays folder
cd "001 Arrays"

# Compile binary search
gcc -o binary_search Binary_search.c

# Run the program
./binary_search
```

### **Working with Linked Lists**
```bash
# Navigate to Linked List folder
cd "002 Linked List"

# Compile insertion program
gcc -o insertion insertion_linked_list.c

# Execute
./insertion
```

---

## 🤝 Contributing

We welcome contributions! Here's how you can help:

1. **🍴 Fork** the repository
2. **🌟 Create** a feature branch (`git checkout -b feature/amazing-feature`)
3. **💾 Commit** your changes (`git commit -m 'Add amazing feature'`)
4. **📤 Push** to the branch (`git push origin feature/amazing-feature`)
5. **🔄 Open** a Pull Request

### **Contributing Guidelines**
- ✅ Follow consistent coding style
- ✅ Add comments to your code
- ✅ Test your implementations
- ✅ Update documentation if needed

---

## 📞 Connect With Me

<div align="center">

### **Let's Connect and Grow Together! 🚀**

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/gauravky/)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/ggauravky)
[![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/the_gau_rav/?utm_source=ig_web_button_share_sheet)

**📧 Email:** [Contact via LinkedIn](https://www.linkedin.com/in/gauravky/)

</div>

---

## ⭐ Support

<div align="center">

**Found this repository helpful? Give it a ⭐!**

![GitHub Stars](https://img.shields.io/github/stars/ggauravky/Data-Structure-using-C?style=social)
![GitHub Forks](https://img.shields.io/github/forks/ggauravky/Data-Structure-using-C?style=social)
![GitHub Watchers](https://img.shields.io/github/watchers/ggauravky/Data-Structure-using-C?style=social)

**Your support motivates me to create more educational content! 🙏**

---

### **📄 License**

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

**© 2024 Gaurav Kumar. All rights reserved.**

</div>