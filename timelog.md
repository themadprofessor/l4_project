# Timelog

* The IETF Transport Services API
* Stuart Reilly	
* 2258082
* Dr Colin Perkins

## Guidance

* This file contains the time log for your project. It will be submitted along with your final dissertation.
* **YOU MUST KEEP THIS UP TO DATE AND UNDER VERSION CONTROL.**
* This timelog should be filled out honestly, regularly (daily) and accurately. It is for *your* benefit.
* Follow the structure provided, grouping time by weeks.  Quantise time to the half hour.

## Week 1
### 25 Sept 2019

* *1 hour* Initialise repo with project template and setup reference manager
* *3 hours* Read up on the current state of async Rust

## Week 2
### 1 Oct 2019

* *3 hours* Read IETF taps interface draft

### 2 Oct 2019
* *1 hour* Read last year's dissertation
* *1.5 hours* Write draft introduction

### 5 Oct 2019
* *1 hour* Read IETF meetings' minutes and slides
* *2 hours* Read some more of last year's dissertation and reasoned potential uses of tokio

## Week 3
### 7 Oct 2019
* *1 hour* Finish reading last year's dissertation

### 8 Oct 2019
* *0.5 hours* Add summaries of completed readings to ref manager
* *0.5 hours* Read Post Sockets

### 9 Oct 2019
* *2 hours* Read NEAT and Post Sockets
* *3 hours* Attempt to implement preconnections as a generics-based state machine

### 12 Oct 2019
* *2 hours* Continue with preconnection generics-based state machine

### 13 Oct 2019
* *3 hours* Start defining transport properties types

## Week 4
### 14 Oct 2019
* *2 hours* Define transport properties api and document

### 16 Oct 2019
* *3 hours* Remove some transport properties and implement direction separately.

### 17 Oct 2019
* *2 hours* Begin defining main flow of api and minimum viable product.

## Week 5
### 22 Oct 2019
* *2 hours* Begin outlining requirements

### Week 6
### 29 Oct 2019
* *1 hour* Expand on outlined requirements

### 1 Nov 2019
* *1 hour* Begin outlining Connection object

### 2 Nov 2019
* *6 hours* Define Connection initialisation

## Week 7
### 5 Nov 2019
* *4 hours* Attempt to define Listener connection

## Week 8
### 11 Nov 2019
* *5 hours* Begin high level trait definitions

### 12 Nov 2019
* *5 hours* Begin refactoring tokio impl to use high level traits

## Week 9
### 21 Nov 2019
* *5 hours* Redefine top level error type and begin tokio rewrite to use trait objs

### 23 Nov 2019
* *8 hours* Continue with tokio rewrite and begin http framer impl

## Week 10
### 03 Dec 2019
* *1 hour* Update readme, add contributing and setup travis
* *4 hours* Attempting to fix orphan rule violation

### 04 Dec 2019
* *3 hours* Add more documentation

### 08 Dec 2019
* *3 hours* Add more documentation and continue http framer impl

## Week 12
### 17 Dec 2019
* *4 hours* Refactor error types for better ergonomics and add more documentation

### 18 Dec 2019
* *1 hour* Write status report

### 19 Dec 2019
* *5 hours* Reimplement dns resolution and attempt to fix invalid connection racing

### 20 Dec 2019
* *5 hours* Fix invalid connection racing and add logging

## Week 13
### 28 Dec 2019
* *2 hours* Attempt to design Listener trait

## Week 14
### 05 Jan 2020
* *1 hours* Continue with Listener trait design and impl

### 09 Jan 2020
* *2 hours* Implement TCP tokio listener
* *1 hour* Fix dissertation compilation and start impl section

## Week 15
### 13 Jan 2020
* *2 hours* Add section to Rust background (async/await and Futures) and add connection racing to Design

### 15 Jan 2020
* *2 hours* Add more to connection racing and start flow diagram

### 19 jan 2020
* *2 hours* Finish flow diagram, add flow and framer to design section

## Week 16
### 27 Jan 2020
* *2 hours* Add some discussion in design section

### 28 Jan 2020
* *3 hours* Add more discussion and expand on the listener trait in the design section

### 29 Jan 2020
* *0.5 hours* Add section on preconnection in the design section
* *2 hours* Continue with design section

### 2 Feb 2020
* *5 hours* Continue with design section, clean up types, unify error types, add impl trait

## Week 17
### 7 Feb 2020
* *1 hour* Add getters for endpoints to connection and listner

## Week 18
### 10 Feb 2020
* *1 hour* Grammer checking and emph more types
* *2 hours* Add section on Endpoint trait, and add more code blocks

## Week 19
### 19 Feb 2020
* *4 hours* Attempt to redesign framers

## Week 20
### 23 Feb 2020
* *3 hours* Attempt to understand nom's streaming parsers

## Week 21
### 24 Feb 2020
* *3 hours* Attempt to fix type errors from framer redesign and fix racing
* *2 hours* Add section on framer errors, change framer associated types to generic params, comment rubbish

## Week 22
### 29 Feb 2020
* *2 hours* Resolve the Unpin requirement for the racing fix
* *3 hours* Attmept to impl http framer with new decode/deframe

## Week 23
### 2 Mar 2020
* *4 hours* Continue http impl

### 8 Mar 2020
* *2 hours* Add impl section on connection racing

## Week 24
### 9 Mar 2020
* *4 hours* Fix http implementation and test
