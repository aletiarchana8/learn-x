C-DAC PGCP-ASSD · Playbook for Archana

# Secure software, learned the *10×* way.

Ten modules. Twelve-ten hours of C-DAC syllabus. Mapped against the tactics that actually turn classroom time into shipped systems and remembered concepts. Open this on day one; return every Monday.

10

Modules

1,210hrs

Syllabus Load

6mo

At Full Pace

1repo

Shipped / Module

## The 1× → 10× multipliers

01

01 · Build immediately

### Code every concept the same day

No concept gets ticked off until you've written code with it. Lecture on hash tables in the morning → implement one from scratch that evening — collisions, resizing, benchmarked against std::unordered_map. The notes you keep are the repos.

02 · Spaced recall

### Flashcards for anything memorisable

Crypto suites, syscall numbers, OWASP Top 10, port numbers, bash flags, CVSS vectors. Anki for 15 minutes a day. Three months in, you'll remember things the people around you Google every time.

03 · Attack & defend

### CTFs over textbooks, for security

picoCTF, OverTheWire Bandit, HackTheBox Academy, PortSwigger Web Security Academy. Two hours of CTF beats a week of passively reading cryptography PDFs. Keep a public write-ups repo.

04 · Teach weekly

### Explain one module to Vivek every Sunday

Feynman method. Ten minutes per week, in Telugu or English, voice note or whiteboard. The places you stumble are the places to go back to on Monday morning. Record them; they're the real syllabus.

05 · Ship in public

### One GitHub repo per module

Each module ends with a shipped artefact. By month six the profile shows a secure chat app, a malware classifier, a WAF, a static analyzer — not a transcript. Recruiters read repos; employers hire portfolios.

06 · AI as tutor, not oracle

### Prompt for explanation, not solutions

Ask Claude to quiz you, not to solve for you. "Give me three variants of this question." "Review my code without rewriting it." "What's wrong with my mental model?" The autocomplete trap kills the 10× curve faster than anything else.

## The ten modules, each with a hack

02

01

### C and Data Structures

150 hrs

GNU toolchainpointersstructs & unionsfile I/Olinked listsstacks, queuesquick/merge/heap sortBST / AVLBFS / DFShashing

HackBuild each data structure twice — once working, once with a memory bug injected. Write the fuzzer that catches it. You learn DS and secure-coding instincts in one pass, before Linux lands.

02

### Object-Oriented Programming in C++

90 hrs

abstraction & encapsulationinheritanceoperator overloadingvirtual & polymorphismtemplatesexceptionsRTTISTLsecure C++ coding

HackReimplement a stripped-down std::vector, std::shared_ptr, and one STL algorithm from scratch. You'll never fear C++ again — and you'll see first-hand why most CVEs in C++ codebases are memory bugs.

03

### Linux System Programming

120 hrs

shell scriptingsyscallsprocesses & threadsPOSIXIPC (pipes, FIFOs, msg queues)scheduling & deadlocksDAC / MACTCP/UDP socketsI/O multiplexingAndroid security

HackBuild `msh`, a tiny shell in 500 lines. Fork, exec, pipes, redirection, signal handling. One weekend project teaches more systems programming than a textbook — and gives you a repo recruiters remember.

04

### Cryptography & Network Security

90 hrs

TCP/IPAuthN / AuthZDoS / DDoSsymmetric & asymmetric cryptostream & block ciphersHMACX.509 / PKITLS / DNSSECfirewallsXDR / SIEM / SOARquantum crypto

HackDo all 48 Cryptopals challenges (cryptopals.com). Breaking crypto teaches crypto far better than reading about it. By set 3 you'll never trust ECB mode again — and that's exactly the instinct the exam, and employers, want.

05

### Secure Web Application Development

150 hrs

HTML / CSS / JSmicroservicessession managementDBMS & NoSQLAPI securityWAFOWASP Top 10MERN stack

HackFinish PortSwigger Web Security Academy end-to-end (free, world-class). Then build a deliberately vulnerable MERN app and patch each OWASP issue yourself. The Top 10 becomes muscle memory, not a list to memorise.

06

### Secure Software Engineering

150 hrs

secure SDLCabuse / misuse casessecurity-by-designCVE / CWE / CVSSSAST / DASTblack / white / grey box testingDevSecOpsNIST SSDF

HackPick one real open-source project. Run Semgrep (SAST) and OWASP ZAP (DAST) against it. File one legitimate security issue upstream. The whole secure-SDLC lecture becomes concrete the moment a maintainer replies.

07

### AI for Cyber Security

150 hrs

Python MLintrusion detectionmalware detectionanomaly detectionadversarial MLGenAI for securityethics & law

HackTrain one real malware classifier end-to-end on the EMBER or MalwareBazaar dataset: features → model → evaluation → adversarial robustness check. One capstone crosses ML, security and ethics — this is the project that gets interviews.

08

### Aptitude

60 hrs

percentagesprofit & lossratio & proportionaveragesmixturessimple & compound interesttime, speed & distancetime & work

HackTwenty timed problems a day for sixty days. IndiaBix + PrepInsta + Oliveboard — skip the textbooks. Placement tests reward pattern recognition under time pressure; nothing else gets you there.

09

### Effective Communication

60 hrs

fundamentalsart of communicationpersonality developmentEnglish grammar

HackRecord yourself on camera explaining one module concept for two minutes. Watch it back once. This is the Feynman habit and mock-interview practice in one — and it'll carry the HR round of every placement.

10

### Capstone Project

180 hrs

end-to-end buildsecure by designdeploymentdocumentationpresentation

HackPick a project that solves a real problem for one real person — not a demo. The capstone recruiters remember is the one deployed somewhere a stranger actually uses it. Think: a secure-upload portal for Vivek's freelance clients, or a WAF for a friend's e-commerce site.

## Six months, start to capstone

03

Month 01

C foundations & DS

a linked-list library with its own fuzzer

Month 02

C++ OOP, deeper DS

mini-STL (vector, shared_ptr, one algorithm)

Month 03

Linux systems programming

msh — a 500-line Unix shell

Month 04

Crypto, networks, aptitude

Cryptopals sets 1-4 complete, write-ups public

Month 05

Secure web + secure SDLC

vulnerable MERN app → patched; one SAST issue filed upstream

Month 06

AI for cybersec + capstone

malware classifier + deployed capstone

## The weekly rhythm

04

Mon

lecture · 3h

code it · 3h

aptitude · 1h

Tue

lecture · 3h

code it · 3h

anki · 20m

Wed

lecture · 3h

code it · 3h

CTF · 1h

Thu

lecture · 3h

code it · 3h

aptitude · 1h

Fri

lecture · 3h

code it · 3h

comm · 1h

Sat

project day · 6h

CTF · 2h

Sun

Feynman · 1h

review week · 1h

rest

## What to open, and when

05

#### Books that stick

- **The C Programming Language**Kernighan & Ritchie — the original
- **Effective C++**Scott Meyers — read in M2
- **Advanced Programming in the UNIX Environment**Stevens — M3 bible
- **Serious Cryptography**Aumasson — modern, readable
- **Hands-On Machine Learning**Géron — M7 foundation

#### Learn-by-doing (free)

- **Cryptopals Crypto Challenges**cryptopals.com — all 48
- **PortSwigger Web Security Academy**portswigger.net/web-security
- **OverTheWire Bandit**overthewire.org/wargames/bandit
- **picoCTF**picoctf.org — gentle entry
- **HackTheBox Academy**academy.hackthebox.com
- **Fast.ai Practical Deep Learning**course.fast.ai — M7

#### Tools to install day one

- **Anki**apps.ankiweb.net — flashcards
- **Burp Suite Community**portswigger.net
- **Wireshark**wireshark.org — M4
- **Semgrep**semgrep.dev — M6 SAST
- **OWASP ZAP**zaproxy.org — M6 DAST
- **Claude Code**as her tutor, not solver

## The master Claude Code prompt

06

Paste this into Claude Code at the start of each module. Fill in the two placeholders. It will produce a module-specific interactive artifact — notes, flashcards, labs, visualisations — in one pass, in the style of this playbook.

### Prompt template

Replace \[MODULE NAME\] and \[TOPICS LIST\] with the module you're starting.

```
Act as Archana's secure-software-development tutor for her C-DAC PGCP-ASSD course.

MODULE: [MODULE NAME, e.g. "Cryptography & Network Security"]
TOPICS: [PASTE THE TOPICS LIST FROM THE PLAYBOOK]

Build me a single self-contained HTML artifact that functions as my
module workbook. It must contain, in this order:

1. A hero with the module name, hours, and a one-line "why this module
   matters in secure software" framing.

2. A concept map — the 8-12 ideas I must understand, each as a card with:
   • a plain-language explanation (max 3 sentences)
   • a tiny code example or diagram where relevant
   • one real-world CVE, breach, or system where it shows up

3. An interactive flashcard deck (20-30 cards) covering definitions,
   algorithms, syscalls, numbers, and gotchas. Flip on click, "I knew it"
   / "review again" buttons, progress persisted in localStorage.

4. A labs section — 5 to 10 hands-on exercises, graded easy → hard, each
   with: setup, task, success criteria, and a "stuck? reveal hint"
   collapsible. No full solutions — hints only.

5. A quiz at the end — 10 multiple-choice questions, immediate feedback,
   final score, and a "generate more" suggestion that tells me what to
   ask you next.

6. A ship-it checklist: the 3-5 things I must have built or demonstrated
   before I close this module.

Design brief:
- Editorial, not a dashboard. Serif display face (Fraunces or similar),
  clean sans body, mono for code and labels.
- Warm cream + ink in light mode, deep ink + warm paper in dark.
- Copper accent (#c4542d), teal secondary. Both themes must work.
- Follow the Artifact CSP rules: only cdnjs / jsdelivr / unpkg /
  cdn.tailwindcss.com / jquery for scripts, Google Fonts for type.
- Mobile-safe: no horizontal scroll at 400px.
- No lorem ipsum. Every example and question grounded in real C-DAC
  syllabus content for this module.

When you're done, publish it as an Artifact so I can keep the link.
```

"The expert in anything was once a beginner who refused to stop shipping." — to be printed, taped above the desk

Built by Vivek for Archana · October 2026 C-DAC PGCP-ASSD · 1,210 hrs · 6 months