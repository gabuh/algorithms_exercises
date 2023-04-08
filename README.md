# algorithms_exercises
Exercises from the book Algorithms by Jose Augusto Navarro Garcia Manzano, Jayr Figueiredo de Oliveira


<details>
<summary> Flowchart Map :mag: </summary>

To better understand the Flowchart Diagrams, take a look at:
<img src="/img/flowchartmap.png" width="110%">

</details>

---



<details>
<summary>Chapter 3 - </summary>


### [Ex.A](/ch3/a.c)
<details>
<summary>flowchart</summary>

```mermaid
graph TD
A[Ler temperatura em Celsius C] --> B[Converter C para F]
B --> C[Apresentar F]

```

</details>


### [Ex.B](/ch3/b.c)
<details>
<summary>flowchart</summary>

```mermaid
graph TD
  A[Ler temperatura em Fahrenheit F] --> B[Converter F para C]
  B --> C[Apresentar C]

```

</details>


### [Ex.C](/ch3/c.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v["pi → 3.14159265"]
a[/raio/]

b[/altura/]

c["volume → pi * (altura^2) * raio "]

d>volume]

E([end])

S --> v --> a --> b --> c --> d --> E

```

</details>



### [Ex.D](/ch3/d.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v["consumo → 12"]
a[/tempo/]

b[/velocidade/]

c["litro → (velocidade * tempo) / consumo "]

d>litro]

E([end])

S --> v --> a --> b --> c --> d --> E

```

</details>


### [Ex.E](/ch3/e.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

a[/tempo/]

b[/taxa/]

c1[/valor/]

c["prestacao → valor + (valor * (taxa / 100) * tempo) "]

d>prestacao]

E([end])

S --> c1 --> a --> b --> c --> d --> E

```

</details>


### [Ex.F](/ch3/f.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

a[/A/]

b[/B/]


c["temporaria → A"]
c2["A → B"]
c3["B → temporaria"]

d> A , B ]

E([end])

S --> a --> b --> c --> c2 --> c3 --> d --> E

```

</details>


### [Ex.G](/ch3/g.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/A/]
v2[/B/]
v3[/C/]
v4[/D/]

a>"'A + B = ' +  soma → A + B"]
a1>"'A + B = ' +  soma → soma + C"]
a2>"'A + B = ' +  soma → soma + D"]

b>"'A * B = ' +  mult → A * B"]
b1>"'A * B = ' +  mult → mult * B"]
b2>"'A * B = ' +  mult → mult * B"]

E([end])

S --> v1 --> v2 --> v3 --> v4 --> a --> a1 --> a2 --> b --> b1 --> b2 --> E

```

</details>


### [Ex.H](/ch3/h.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/C/]
v2[/L/]
v3[/A/]

b2>"'Volume e ' +  C*L*A"]

E([end])

S --> v1 --> v2 --> v3 --> b2 --> E

```

</details>


### [Ex.I](/ch3/i.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/value/]

b2>"'value ^ 2 =  ' +  Math.h → pow(value,2)"]

E([end])

S --> v1 --> b2 --> E

```

</details>



### [Ex.J](/ch3/j.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/A/]
v2[/B/]

b2>"'(A ^ 2) - (B ^ 2) =  ' +  Math.h → pow(A,2) - Math.h → pow(B,2)"]

E([end])

S --> v1 --> v2 --> b2 --> E

```

</details>



### [Ex.K](/ch3/k.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/cotacao/]
v2[/realAmount/]

b2>"'Conversao: R$' +  cotacao * realAmount"]

E([end])

S --> v1 --> v2 --> b2 --> E

```

</details>


### [Ex.L](/ch3/l.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/cotacao/]
v2[/realAmount/]

b2>"'Conversao: $' +  cotacao / realAmount"]

E([end])

S --> v1 --> v2 --> b2 --> E

```

</details>


### [Ex.M](/ch3/m.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/A/]
v2[/B/]
v3[/C/]

b2>"'(A ^ 2) + (B ^ 2) + (C ^ 2) =  ' +  Math.h → pow(A,2) + Math.h → pow(B,2) + Math.h → pow(C,2)"]

E([end])

S --> v1 --> v2 --> v3 --> b2 --> E

```

</details>



### [Ex.N](/ch3/n.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/A/]
v2[/B/]
v3[/C/]

b2>"'(A ^ 2) + (B ^ 2) + (C ^ 2) =  ' +  Math.h → pow(A,2) + Math.h → pow(B,2) + Math.h → pow(C,2)"]

E([end])

S --> v1 --> v2 --> v3 --> b2 --> E

```

</details>



### [Ex.O](/ch3/o.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/A/]
v2[/B/]
v3[/C/]
v4[/D/]

V6["P → A + C"]
V7["S → B + D"]

b2>"'A + C =  ' +  P"]
b3>"'B + D =  ' +  S"]

E([end])

S --> v1 --> v2 --> v3 --> v4 --> v5 --> v6 --> v7 --> b2 --> b3 --> E

```

</details>


### [Ex.P](/ch3/p.c)
<details>
<summary>flowchart</summary>

```mermaid
flowchart


S([Start])

v1[/income/]
v2[/adjust/]

b2>"'The adjust of %' + adjust + ' is ' +  ((income / 100) * adjust) + income"]

E([end])

S --> v1 --> v2 --> b2 --> E

```

</details>











</details>


---

<details>
<summary>Chapter 4 - Conditional :white_large_square: </summary>



### Nothing YET



</details>

---

<details> 
<summary>Chapter 5 - Loops :white_check_mark: </summary>

### [Ex.A Power of two](/ch5/a.c)
<details>
<summary> Flowchart </summary>

![ex.achapter5](/ch5/a_c5.png)

</details>

### [Ex.B Math table](/ch5/b.c)
<details>
<summary> Flowchart </summary>

![ex.bchapter5](/ch5/b_c5.png)

</details>

### [Ex.C Counting Numbers SUM](/ch5/c.c)
<details>
<summary> Flowchart </summary>

![ex.cchapter5](/ch5/c_c5.png)

</details>

### [Ex.D EVEN SUM](/ch5/d.c)
<details>
<summary> Flowchart </summary>

![ex.dchapter5](/ch5/d_c5.png)

</details>

### [Ex.E ODD Numbers ](/ch5/e.c)
<details>
<summary> Flowchart </summary>

![ex.echapter5](/ch5/e_c5.png)

</details>

### [Ex.F Divisibility by four ](/ch5/f.c)
<details>
<summary> Flowchart </summary>

![ex.fchapter5](/ch5/f_c5.png)

</details>

### [Ex.G Power of three ](/ch5/g.c)
<details>
<summary> Flowchart </summary>

![ex.gchapter5](/ch5/g_c5.png)

</details>

### [Ex.H Power of choices ](/ch5/h.c)
<details>
<summary> Flowchart </summary>

![ex.hchapter5](/ch5/h_c5.png)

</details>

### [Ex.I Fibonacci](/ch5/i.c)
<details>
<summary> Flowchart </summary>

![ex.ichapter5](/ch5/i_c5.png)

</details>

### [Ex.J Temperature](/ch5/j.c)
<details>
<summary> Flowchart </summary>

![ex.jchapter5](/ch5/j_c5.png)

</details>

### [Ex.K Malba Tahan](/ch5/k.c)
<details>
<summary> Flowchart </summary>

![ex.kchapter5](/ch5/k_c5.png)

</details>

### [Ex.L Factorial](/ch5/l.c)
<details>
<summary> Flowchart </summary>

![ex.lchapter5](/ch5/l_c5.png)

</details>

### [Ex.M Mean Sum](/ch5/m.c)
<details>
<summary> Flowchart </summary>

![ex.mchapter5](/ch5/m_c5.png)

</details>

### [Ex.N Sum and Mean](/ch5/n.c)
<details>
<summary> Flowchart </summary>

![ex.nchapter5](/ch5/n_c5.png)

</details>

### [Ex.O Odd Factorial](/ch5/o.c)
<details>
<summary> Flowchart </summary>

![ex.ochapter5](/ch5/o_c5.png)

</details>

### [Ex.P Mean Sum](/ch5/p.c)
<details>
<summary> Flowchart </summary>

![ex.pchapter5](/ch5/p_c5.png)

</details>

### [Ex.Q Area Measurement](/ch5/q.c)
<details>
<summary> Flowchart </summary>

![ex.qchapter5](/ch5/q_c5.png)

</details>

### [Ex.R Smallest Number and Biggest Number](/ch5/r.c)
<details>
<summary> Flowchart </summary>

![ex.rchapter5](/ch5/r_c5.png)

</details>

### [Ex.S Division Operation](/ch5/s.c)
<details>
<summary> Flowchart </summary>

![ex.schapter5](/ch5/s_c5.png)

</details>

</details>

---

<details>
<summary>Chapter 6 - Matrices & Vectors :white_large_square: </summary>

### [Ex.A](/ch6/a.c)
<details>
<summary> Flowchart </summary>

![ex.achapter6](/ch6/a_c6.png)

</details>

### [Ex.B](/ch6/b.c)
<details>
<summary> Flowchart </summary>

![ex.bchapter6](/ch6/b_c6.png)

</details>

### [Ex.C](/ch6/c.c)
<details>
<summary> Flowchart </summary>

![ex.cchapter6](/ch6/c_c6.png)

</details>

### [Ex.D](/ch6/d.c)
<details>
<summary> Flowchart </summary>

![ex.dchapter6](/ch6/d_c6.png)

</details>

### [Ex.E](/ch6/e.c)
<details>
<summary> Flowchart </summary>

![ex.echapter6](/ch6/e_c6.png)

</details>

### [Ex.F](/ch6/f.c)
<details>
<summary> Flowchart </summary>

![ex.fchapter6](/ch6/f_c6.png)

</details>

### [Ex.G](/ch6/g.c)
<details>
<summary> Flowchart </summary>

![ex.gchapter6](/ch6/g_c6.png)

</details>

### [Ex.H](/ch6/h.c)
<details>
<summary> Flowchart </summary>

![ex.hchapter6](/ch6/h_c6.png)

</details>

### [Ex.I](/ch6/i.c)
<details>
<summary> Flowchart </summary>

![ex.ichapter6](/ch6/i_c6.png)

</details>

### [Ex.J](/ch6/j.c)
<details>
<summary> Flowchart </summary>

![ex.jchapter6](/ch6/j_c6.png)

</details>

### [Ex.K](/ch6/k.c)
<details>
<summary> Flowchart </summary>

![ex.kchapter6](/ch6/k_c6.png)

</details>

### [Ex.L](/ch6/l.c)
<details>
<summary> Flowchart </summary>

![ex.lchapter6](/ch6/l_c6.png)

</details>

### [Ex.M](/ch6/m.c)
<details>
<summary> Flowchart </summary>

![ex.mchapter6](/ch6/m_c6.png)

</details>

### [Ex.N](/ch6/n.c)
<details>
<summary> Flowchart </summary>

![ex.nchapter6](/ch6/n_c6.png)

</details>

### [Ex.O](/ch6/o.c)
<details>
<summary> Flowchart </summary>

![ex.ochapter6](/ch6/o_c6.png)

</details>

### [Ex.P](/ch6/p.c)
<details>
<summary> Flowchart </summary>

![ex.pchapter6](/ch6/p_c6.png)

</details>

### [Ex.Q](/ch6/q.c)
<details>
<summary> Flowchart </summary>

![ex.qchapter6](/ch6/q_c6.png)

</details>

### [Ex.R](/ch6/r.c)
<details>
<summary> Flowchart </summary>

![ex.rchapter6](/ch6/r_c6.png)

</details>

### [Ex.S](/ch6/s.c)
<details>
<summary> Flowchart </summary>

![ex.schapter6](/ch6/s_c6.png)

</details>

### [Ex.T](/ch6/t.c)
<details>
<summary> Flowchart </summary>

![ex.tchapter6](/ch6/t_c6.png)

</details>

### [Ex.U](/ch6/u.c)
<details>
<summary> Flowchart </summary>

![ex.uchapter6](/ch6/u_c6.png)

</details>

### [Ex.V](/ch6/v.c)
<details>
<summary> Flowchart </summary>

![ex.vchapter6](/ch6/v_c6.png)

</details>

### [Ex.W](/ch6/w.c)
<details>
<summary> Flowchart </summary>

![ex.wchapter6](/ch6/w_c6.png)

</details>

### [Ex.X](/ch6/x.c)
<details>
<summary> Flowchart </summary>

![ex.xchapter6](/ch6/x_c6.png)

</details>

### [Ex.Y](/ch6/y.c)
<details>
<summary> Flowchart </summary>

![ex.ychapter6](/ch6/y_c6.png)

</details>

### [Ex.Z](/ch6/z.c)
<details>
<summary> Flowchart </summary>

![ex.zchapter6](/ch6/z_c6.png)

</details>


</details>

---

<details>
<summary>Chapter 7 - Sorting & Search :white_check_mark:</summary>

### [EX.A Sorting a vector](/ch7/a.c)
<details>
<summary> Flowchart </summary>

![ex.achapter7](/ch7/a_c7.png)

</details>

### [Ex.B Binary Searching](/ch7/b.c)
<details>
<summary> Flowchart </summary>

![ex.bchapter7 ](/ch7/b_c7.png)

</details>

### [Ex.C Elements' Factorial](/ch7/c.c)
<details>
<summary> Flowchart </summary>

![ex.cchapter7](/ch7/c_c7.png)

</details>

### [Ex.D Vectors' sum](/ch7/d.c)
<details>
<summary> Flowchart </summary>

![ex.dchapter7](/ch7/d_c7.png)

</details>

### [Ex.E Holding elements of two vectors](/ch7/e.c)
<details>
<summary> Flowchart </summary>

![ex.echapter7](/ch7/e_c7.png)

</details>

### [Ex.F Sequence Searching](/ch7/e.c)
<details>
<summary> Flowchart </summary>

![ex.fchapter7](/ch7/e_c7.png)

</details>

### [Ex.G Binary Searching 2](/ch7/g.c)
<details>
<summary> Flowchart </summary>

![ex.gchapter7](/ch7/g_c7.png)

</details>

### [Ex.H Operantion & Sorting](/ch7/h.c)
<details>
<summary> Flowchart </summary>

![ex.hchapter7](/ch7/h_c7.png)

</details>

### [Ex.I Sorting a vector 2](/ch7/i.c)
<details>
<summary> Flowchart </summary>

![ex.ichapter7](/ch7/i_c7.png)

</details>

### [Ex.J Math Operation & Factorial](/ch7/j.c)
<details>
<summary> Flowchart </summary>

![ex.jchapter7](/ch7/j_c7.png)

</details>

### [Ex.K Pow & Sorting](/ch7/k.c)
<details>
<summary> Flowchart </summary>

![ex.kchapter7](/ch7/k_c7.png)

</details>

### [Ex.L Operation & Sorting 2](/ch7/l.c)
<details>
<summary> Flowchart </summary>

![ex.lchapter7](/ch7/l_c7.png)

</details>

### [Ex.M Sequence Searching 2](/ch7/m.c)
<details>
<summary> Flowchart </summary>

![ex.mchapter7](/ch7/m_c7.png)

</details>

### [Ex.N Operation & Binary Search](/ch7/n.c)
<details>
<summary> Flowchart </summary>

![ex.nchapter7](/ch7/n_c7.png)

</details>

### [Ex.O Binary Searching 3](/ch7/o.c)
<details>
<summary> Flowchart </summary>

![ex.ochapter7](/ch7/o_c7.png)

</details>

### [Ex.P ABC Sorting](/ch7/p.c)
<details>
<summary> Flowchart </summary>

![ex.pchapter7](/ch7/p_c7.png)

</details>

### [Ex.Q String Sorting and Binary Search](/ch7/q.c)
<details>
<summary> Flowchart </summary>

![ex.qchapter7](/ch7/q_c7.png)

</details>


### [Ex.R String Sorting](/ch7/r.c)
<details>
<summary> Flowchart </summary>

![ex.rchapter7](/ch7/r_c7.png)

</details>

### [Ex.S Sequence Searching 3](/ch7/s.c)
<details>
<summary> Flowchart </summary>

![ex.schapter7](/ch7/s_c7.png)

</details>


</details> 

---

<details>
<summary>Chapter 8 :round_pushpin: </summary>

### [Ex.A Two Dimension Vector](/ch8/a.c)
<details>
<summary> Flowchart </summary>

![ex.achapter8](/ch8/a_c8.png)

</details>

### [Ex.B Two Dimension Vector](/ch8/b.c)
<details>
<summary> Flowchart </summary>

![ex.bchapter8](/ch8/b_c8.png)

</details>

### [Ex.C Columns and Lines 2D](/ch8/c.c)

<details>

<summary> Flowchart </summary>

![ex.cchapter8](/ch8/c_c8.png)

</details>

### [Ex.D Factoring and Powering Columns](/ch8/d.c)

<details>

<summary> Flowchart </summary>

![ex.dchapter8](/ch8/d_c8.png)

</details>

### [Ex.E Multiplying Columns](/ch8/e.c)

<details>

<summary> Flowchart </summary>

![ex.echapter8](/ch8/e_c8.png)

</details>

### [Ex.F Factorial 2D Arrays](/ch8/f.c)

<details>

<summary> Flowchart </summary>

![ex.fchapter8](/ch8/f_c8.png)

</details>

### [Ex.G Convert Temperature 2D Array](/ch8/g.c)

<details>

<summary> Flowchart </summary>

![ex.gchapter8](/ch8/g_c8.png)

</details>

### [Ex.H Main Diagonal ](/ch8/h.c)

<details>

<summary> Flowchart </summary>

![ex.hchapter8](/ch8/h_c8.png)

</details>

### [Ex.I ](/ch8/i.c)

<details>

<summary> Flowchart </summary>

![ex.ichapter8](/ch8/i_c8.png)

</details>

### [Ex.I ](/ch8/j.c)

<details>

<summary> Flowchart </summary>

![ex.jchapter8](/ch8/j_c8.png)

</details>


</details>

---
