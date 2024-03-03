#### 26.02

**Tasks :**
- Conduct prelim research on directives, node types (ie what a declarator is)

**Log:**
- Looked at what directives are, still not 100% familiriased but have an idea of where their usage will be important
- Got a rough idea of the different production rules in the parse and the types of nodes we might need. Still not sure of which nodes need their own class and which can be considered as a collection of other nodes/ other node class

#### 27.02

**Tasks :**
- Start designing context

**Log :**
- Thought about what will be required in the context. For now added the inital symbol table draft which contains the varaible name, its type and value organised in a map.
- I think it would be crucial to include activation records of procedures to keep track of scope as well as register usage
- Need to find a way to determine the frame/activation record size required for a given procedure during compilation - may need a framework to determine number of variables and parameters of a function
- Started working on implementing the basic features of the parser


#### 28.02

**Log :**
- Discussed initial task allocation to start implementing the parser and different node types
- Still unsure of the exact structure of the context but that can be implemented once we know the kinds of nodes we have


