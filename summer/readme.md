# Summer work

* The IETF Transport Services API
* Stuart Reilly
* 2258082
* Dr Colin Perkins

## Research completed
Read two IETF Internet-Drafts during the summer, draft-ietf-taps-arch-04
and draft-ietf-taps-impl-04.

## Ideas developed
The Internet-Drafts specifies the use of callbacks to handle the asynchronous
events raised during networking, but Rust has support for Futures. Futures
allow functions to return an object which may eventually resolve to a value.
They allow chained futures as well as callbacks. Rather than explicitly
requiring all asynchronous functions to need callbacks, a Future should be
returned.

## Concerns or risks identified
The proposed programming language to be used, Rust, has a 6 week release cycle
for its stable versions. It also has the notion of editions, which currently
have a 2-3 year cycle, but an edition represents the state of the language at
a specific point. Would it be better to target a specific edition or target a
specific stable version?


