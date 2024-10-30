The concept here is based on the **properties of a star graph**. In a star graph, all nodes are connected to a single central node. Given two edges, this central node will appear in both edges. 

### Key Idea:
1. Check the first two edges to find a common node.
2. The common node is the center of the star graph.

### Code Summary:
The function compares nodes in the first two edges to find the common node, which is then returned as the center.