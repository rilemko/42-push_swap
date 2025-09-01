<a id="readme-top" name="readme-top"></a>

<!-- ------------------------------
* TITLE, DESCRIPTION & CONTACT
------------------------------ -->
# 🤖 push_swap

<table>
    <tr>
        <th align="left" width="3333px">Score</th>
        <th align="left" width="3333px">Duration</th>
        <th align="left" width="3333px">Peer(s)</th>
    </tr>
    <tr>
        <td>✅ <b>125</b> / 100</td>
        <td>🕓 2.5 week(s)</td>
        <td>👷🏻 No</td>
    </tr>
</table>

<br>

This project is a program that sorts a list of integers received as arguments using a **very limited number of available instructions** and **two chained lists**. It must do this with as **few instructions as possible** and display them on the standard output. A second program can read the instructions used and confirm that they are correct.

[**⛓️ FILE : SUBJECT**](en.subject.pdf)


<br>

<!-- ------------------------------
* TABLE OF CONTENTS
------------------------------ -->
## 📋 Table of contents

- [**👀 Overview**](#readme-overview)
- [**📦 Requirements**](#readme-requirements)
- [**💾 Installation**](#readme-installation)
- [**⚡️ Usage**](#readme-usage)
- [**🛠️ Makefile**](#readme-makefile)
- [**📄 License**](#readme-license)

<a id="readme-overview" name="readme-overview"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* OVERVIEW
------------------------------ -->
## 👀 Overview

### Features

- Sorts integers with as few instructions as possible.
- Supports arguments in any format (e.g. `./push_swap 3 "1 2" 4`).
- Writes instructions to standard output.
- Checker can check the validity of instructions written to standard output.

### Instructions

- `sa`: Swap the first 2 elements of stack **A**.
- `sb`: Swap the first 2 elements of stack **B**.
- `ss`: `sa` and `sb` at the same time.
- `pa`: Put the first element of **B** at the top of **A**.
- `pb`: Put the first element of **A** at the top of **B**.
- `ra`: Shift up elements of **A** by 1. The first element becomes the last.
- `rb`: Shift up elements of **B** by 1. The first element becomes the last.
- `rr`: `ra` and `rb` at the same time.
- `rra`: Shift down elements of **A** by 1. The last element becomes the first.
- `rrb`: Shift down elements of **B** by 1. The last element becomes the first.
- `rrr`: `rra` and `rrb` at the same time.

### Benchmark

<table>
    <tr>
        <th align="left" width="3500px">Stack size</th>
        <th align="left" width="3500px">Iterations</th>
        <th align="left" width="1000px">Min</th>
        <th align="left" width="1000px">Avg</th>
        <th align="left" width="1000px">Max</th>
    </tr>
    </tr>
        <td>5</td>
        <td>200</td>
        <td>4</td>
        <td>7</td>
        <td>12</td>
    </tr>
    </tr>
        <td>100</td>
        <td>200</td>
        <td>539</td>
        <td>606</td>
        <td>687</td>
    </tr>
    </tr>
        <td>500</td>
        <td>200</td>
        <td>4625</td>
        <td>4810</td>
        <td>4974</td>
    </tr>
</table>

<a id="readme-requirements" name="readme-requirements"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* REQUIREMENTS
------------------------------ -->
## 📦 Requirements

```
sudo apt -y install clang-12 make
```

<a id="readme-installation" name="readme-installation"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* INSTALLATION
------------------------------ -->
## 💾 Installation

**1. Get the project**

```
git clone https://github.com/rilemko/42-push_swap.git
```

<br>

**2. Build the project**

```
make -j$(nproc)
```

> **🔵 Info:** The `push_swap` and `checker` executables will be created in the project root directory.

<br>

**3. Run the project**

```
./push_swap [integers...]
```

<a id="readme-usage" name="readme-usage"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* USAGE
------------------------------ -->
## ⚡️ Usage

**Example:**

```console
$ ./push_swap 3 1 2 4
pb
rra
pa
ra
ra
```

<br>

**Check instructions:**

```console
$ ARG="3 1 2 4"; ./push_swap $ARG | ./checker $ARG
OK
```

<a id="readme-makefile" name="readme-makefile"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* MAKEFILE
------------------------------ -->
## 🛠️ Makefile

<table>
    <tr>
        <th align="left" width="500px">Rule</th>
        <th align="left" width="9500px">Action</th>
        </tr>
    <tr><td><code>all</code></td><td>Compile.</td></tr>
    <tr><td><code>clean</code></td><td>Delete all generated object files</td></tr>
    <tr><td><code>fclean</code></td><td>Apply <code>clean</code>, <code>lclean</code>and delete the executable.</td></tr>
    <tr><td><code>lclean</code></td><td>Apply <code>fclean</code> to all used libraries.</td></tr>
    <tr><td><code>re</code></td><td>Apply <code>fclean</code> and force recompile.</td></tr>
</table>

[**⛓️ FILE : MAKEFILE**](Makefile)

<a id="readme-license" name="readme-license"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* LICENSE
------------------------------ -->
## 📄 License

This project is licensed under the terms of the **MIT** license.

[**⛓️ FILE : LICENSE**](LICENSE.md)

<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>
