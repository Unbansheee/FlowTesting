A minimal repo for testing and debugging FlowGraph issues

## Info
- Unreal 5.4.2
- C++ Project
- Using FlowGraph latest as a submodule

## Steps to reproduce the current Instanced Object issue:
1) Open Flow_Demo asset
2) Add any node to the graph
3) Attach the InstancedObject AddOn
4) Change the Object in the details panel to a non-default one such as 'Instanced Object Subclass A'
5) Copy and paste the AddOn to another node

## Notes
- It does not seem to crash when the editor is restarted after changing the type
