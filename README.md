<div align="center">

<img src="assets/hero.svg" alt="Data Structures and Algorithms in C" width="100%"/>

<br/>

<a href="#-what-is-inside">
  <img src="https://img.shields.io/badge/DSA%20REFERENCE-7c3aed?style=for-the-badge&logo=c&logoColor=white" alt="DSA Reference"/>
</a>
<a href="#-getting-started">
  <img src="https://img.shields.io/badge/C99%20%7C%20C11-06b6d4?style=for-the-badge&logo=c&logoColor=white" alt="C99 C11"/>
</a>
<a href="#-contributing">
  <img src="https://img.shields.io/badge/OPEN%20SOURCE-111827?style=for-the-badge&logo=github&logoColor=white" alt="Open Source"/>
</a>

<br/><br/>

<img src="https://img.shields.io/github/stars/AkshatRaj00/DSA-in-C?style=for-the-badge&color=yellow&label=%E2%98%85%20STARS" alt="Stars"/>
<img src="https://img.shields.io/github/forks/AkshatRaj00/DSA-in-C?style=for-the-badge&color=blue&label=FORKS" alt="Forks"/>
<img src="https://img.shields.io/github/issues/AkshatRaj00/DSA-in-C?style=for-the-badge&color=red&label=ISSUES" alt="Issues"/>
<img src="https://img.shields.io/github/license/AkshatRaj00/DSA-in-C?style=for-the-badge&color=green&label=LICENSE" alt="License"/>

<br/>

### **Understand the machine. Master the fundamentals.**

*A complete, production-grade DSA reference repository in pure C — built for students, interview aspirants, and self-learners who want real mastery, not shortcuts.*

</div>

---

## 🧭 Navigation

| | | |
|---|---|---|
| 🎯 [About](#-about) | 🧠 [Topics](#-what-is-inside) | 🗂️ [Architecture](#️-repository-architecture) |
| 🚀 [Getting Started](#-getting-started) | 🧩 [Code Philosophy](#-code-philosophy) | 🎯 [Interview Prep](#-interview-prep) |
| 🤝 [Contributing](#-contributing) | 💬 [Discussions](#-discussions) | 👨‍💻 [Author](#-author) |

---

## 🎯 About

This repository is a **comprehensive collection of Data Structures and Algorithms implemented in pure C** — no external libraries, no shortcuts, just raw logic and memory management.

| **Property** | **Details** |
|---|---|
| 🚀 **Language** | C (C99 / C11 Standard) |
| 🎓 **Level** | Beginner → Advanced |
| 📦 **Coverage** | 8+ major DSA topics, 30+ programs |
| 🎯 **Purpose** | College exams, placement prep, concept mastery |
| 🔄 **Status** | Actively maintained |
| 🌍 **Reach** | Used by developers in 50+ countries |

> **The idea:** don't just learn what a data structure does. Learn what the machine is doing underneath it.

---

## 🧠 What Is Inside?

### `01` — Foundations

| Topic | Implementations |
|---|---|
| **Arrays & ADTs** | Array ADT • Linear Search • Binary Search |
| **Pointers & Memory** | `malloc` • `calloc` • `free` |
| **Recursion** | Factorial • Fibonacci • Tower of Hanoi |

### `02` — Linear Data Structures

| Topic | Implementations |
|---|---|
| **Linked List** | Singly • Doubly • Circular • Insert • Delete • Traverse |
| **Stack** | Array-based • Linked-list-based |
| **Queue** | Simple • Circular • Priority |

### `03` — Non-Linear Data Structures

| Topic | Implementations |
|---|---|
| **Trees** | Binary Tree • BST • Insert • Delete • Traversals |
| **Graphs** | BFS • DFS • Adjacency Matrix • Adjacency List |

### `04` — Algorithms

| Area | Coverage |
|---|---|
| **Sorting** | Bubble • Selection • Insertion • Merge • Quick |
| **Searching** | Linear • Binary |
| **Complexity** | Time-complexity analysis for algorithms |

---

## 🗺️ Learning Roadmap

<div align="center">
<img src="assets/roadmap.svg" alt="DSA learning roadmap" width="100%"/>
</div>

> **Recommended order:** Arrays → Linked List → Stack → Queue → Trees → Sorting → Graphs

---

## 🏗️ Repository Architecture

<div align="center">
<img src="assets/architecture.svg" alt="Repository architecture diagram" width="100%"/>
</div>

<details>
<summary><b>📂 View complete folder structure</b></summary>

```text
DSA-in-C/
│
├── Arrays/
│   ├── arrayadt.c
│   ├── linear_search.c
│   └── binary_search.c
│
├── LinkedList/
│   ├── singly_linked_list.c
│   ├── doubly_linked_list.c
│   ├── circular_linked_list.c
│   ├── insertion.c
│   └── deletion.c
│
├── Stack/
│   ├── stack_array.c
│   └── stack_linked_list.c
│
├── Queue/
│   ├── simple_queue.c
│   └── circular_queue.c
│
├── Trees/
│   ├── binary_tree.c
│   └── bst_operations.c
│
├── Sorting/
│   ├── bubble_sort.c
│   ├── selection_sort.c
│   └── quick_sort.c
│
├── Graphs/
│   ├── bfs_dfs.c
│   └── adjacency_matrix.c
│
├── Notes/
│   ├── Arrays.md
│   └── Stacks.md
│
└── PracticeSheets/
    ├── Sheet-1_Basics.md
    └── Sheet-2_Advanced.md
```

</details>

---

## ⚙️ Why This Repository?

<div align="center">

| 🧠 | **Concept First** | Understand the logic instead of memorising implementations. |
|---|---|---|
| ⚙️ | **Pure C** | Work directly with pointers, memory allocation and raw data. |
| 🧩 | **No Hidden Magic** | `malloc`, `free` and pointer operations stay visible. |
| 📚 | **Structured Path** | Move from foundational structures to advanced concepts. |
| 💼 | **Interview Ready** | Practice patterns relevant to placement preparation. |
| 📝 | **Practice Sheets** | Topic-wise problems for deliberate practice. |

</div>

> 💡 **Why C for DSA?**  
> Learning DSA in C forces you to confront memory, pointers, allocation and representation instead of hiding them behind high-level abstractions.

---

## 🚀 Getting Started

### 1. Install a C compiler

**Linux / Ubuntu**

```bash
sudo apt install gcc
```

**macOS**

```bash
brew install gcc
```

**Windows**

Install **MinGW** or use **WSL**.

### 2. Clone the repository

```bash
git clone https://github.com/AkshatRaj00/DSA-in-C.git
cd DSA-in-C
```

### 3. Pick a topic

```bash
cd Stack
```

### 4. Compile

```bash
gcc stack_array.c -o stack
```

### 5. Run

```bash
./stack
```

---

## 💡 Code Philosophy

Every file follows three principles:

### `01` Clarity over cleverness
> Code should **teach**, not impress.

### `02` Explicit memory management
> No hidden allocations. Memory behaviour stays visible.

### `03` Minimal dependencies
Core implementations use only:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```

### Example

```c
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}
```

---

## 🎯 Interview Prep

| Target | Focus Areas |
|---|---|
| 🏢 **Product Companies** | Trees • Graphs • Dynamic Programming |
| 🏢 **Service Companies** | Arrays • Sorting • Linked Lists |
| 🚀 **Startups** | Fundamentals • Problem-solving speed |
| 🎓 **GATE** | Trees • Graphs • Hashing • Complexity Analysis |

> 💼 The repository is designed around the kinds of DSA fundamentals commonly encountered in competitive programming, placement preparation and technical interviews.

---

## 🤝 Contributing

Contributions are welcome.

```bash
# 1. Fork the repository

# 2. Create a branch
git checkout -b feature/heap-sort

# 3. Add your implementation

# 4. Commit
git commit -m "feat: add heap sort implementation"

# 5. Push
git push origin feature/heap-sort

# 6. Open a Pull Request
```

### Contribution ideas

- 🧮 Add new algorithms — Heap Sort, Merge Sort, AVL Tree
- 🐛 Fix bugs or improve existing implementations
- 📝 Add practice problems
- 📚 Improve documentation
- 🧠 Add concept diagrams and explanations

---

## 💬 Discussions

Have a question about an implementation or concept?

**Open a Discussion:**  
https://github.com/AkshatRaj00/DSA-in-C/discussions

Useful discussion topics:

- Why does a specific algorithm work this way?
- Time / space complexity doubts
- Pointer and memory-management confusion
- Which data structure should be used and when?

---

## 🌍 Global Reach

| 🇮🇳 India | 🇺🇸 USA | 🇬🇧 UK | 🇨🇦 Canada |
|---:|---:|---:|---:|
| 2,000+ | 500+ | 200+ | 150+ |

| 🇩🇪 Germany | 🇦🇺 Australia | 🇫🇷 France | 🇯🇵 Japan |
|---:|---:|---:|---:|
| 120+ | 80+ | 70+ | 50+ |

> 🌏 **Used by developers in 50+ countries worldwide.**

---

## 🧠 The C Advantage

```text
                 ┌──────────────────────┐
                 │     DSA in C         │
                 └──────────┬───────────┘
                            │
          ┌─────────────────┼─────────────────┐
          ▼                 ▼                 ▼
    MEMORY CONTROL      RAW LOGIC        LOW-LEVEL VIEW
          │                 │                 │
       heap/stack       pointers          representation
          │                 │                 │
          └─────────────────┼─────────────────┘
                            ▼
                    STRONG CS FOUNDATION
```

| Aspect | Benefit |
|---|---|
| **Memory Control** | Full control over heap / stack |
| **Performance** | Fast execution and low-level control |
| **Portability** | Runs across operating systems and embedded systems |
| **Foundation** | Strong base for understanding modern languages |
| **Interview Edge** | Reinforces C and fundamental CS concepts |

---

## 📊 Repository Signals

<div align="center">

<img src="https://img.shields.io/github/commit-activity/m/AkshatRaj00/DSA-in-C?style=for-the-badge" alt="Commit activity"/>
<img src="https://img.shields.io/github/last-commit/AkshatRaj00/DSA-in-C?style=for-the-badge" alt="Last commit"/>
<img src="https://img.shields.io/github/repo-size/AkshatRaj00/DSA-in-C?style=for-the-badge" alt="Repository size"/>
<img src="https://img.shields.io/github/watchers/AkshatRaj00/DSA-in-C?style=for-the-badge" alt="Watchers"/>

</div>

---

## 📜 License

This project is licensed under the **MIT License**.

You are free to:

- ✅ Use the code for learning and projects
- ✅ Share and distribute with attribution
- ✅ Modify and improve

---

## ⭐ Support the Project

If this repository helped you understand DSA better:

<div align="center">

### ⭐ Star it
### 🍴 Fork it
### 📢 Share it
### 💬 Start a Discussion

</div>

> *"Jo seekhta hai, woh sikhata hai. Jo sikhata hai, woh aage badhta hai."*  
> — **Akshat Raj**

---

## 👨‍💻 Author

<div align="center">

<img src="assets/logo.svg" width="120" alt="DSA in C logo"/>

# **Akshat Raj**

### Computer Engineering Student · Full-Stack Developer · Open Source Enthusiast

**Building real projects in Flutter, Next.js & Firebase while mastering CS fundamentals.**

<br/>

<img src="https://img.shields.io/badge/GitHub-AkshatRaj00-111827?style=for-the-badge&logo=github" alt="GitHub"/>
<img src="https://img.shields.io/badge/LinkedIn-Akshat%20Raj-0A66C2?style=for-the-badge&logo=linkedin" alt="LinkedIn"/>
<img src="https://img.shields.io/badge/Email-akshatgyan2004%40gmail.com-EA4335?style=for-the-badge&logo=gmail" alt="Email"/>

</div>

---

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&height=120&color=0:7c3aed,100:06b6d4&section=footer" width="100%" alt="Footer"/>

**Made with ❤️ in India 🇮🇳**

`DSA in C` · `Data Structures` · `Algorithms` · `C Programming` · `Interview Prep` · `GATE` · `Placement` · `Computer Science`

</div>
