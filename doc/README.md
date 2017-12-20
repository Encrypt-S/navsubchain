SubChain Core 0.13.0
=====================

Setup
---------------------
[SubChain Core](http://subchain.org/en/download) is the original SubChain client and it builds the backbone of the network. However, it downloads and stores the entire history of SubChain transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

Running
---------------------
The following are some helpful notes on how to run SubChain on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/subchain-qt` (GUI) or
- `bin/subchaind` (headless)

### Windows

Unpack the files into a directory, and then run subchain-qt.exe.

### OS X

Drag SubChain-Core to your applications folder, and then run SubChain-Core.

### Need Help?

* See the documentation at the [SubChain Wiki](https://en.subchain.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#subchain](http://webchat.freenode.net?channels=subchain) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=subchain).
* Ask for help on the [SubChainTalk](https://subchaintalk.org/) forums, in the [Technical Support board](https://subchaintalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build SubChain on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The SubChain repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/subchain/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [SubChainTalk](https://subchaintalk.org/) forums, in the [Development & Technical Discussion board](https://subchaintalk.org/index.php?board=6.0).
* Discuss project-specific development on #subchain-core-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=subchain-core-dev).
* Discuss general SubChain development on #subchain-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=subchain-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
