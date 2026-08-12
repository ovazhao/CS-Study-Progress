# requirement engineering
the communication gateway between user and developers
```
## learning goal
elicit :finding out the requirement
## natural language requirements
## modeled requirements
- graph->UML diagrams
- formulas->mathematical representation
- code->pseudocode
## artifact-based requirements
- goals
- stakeholders
- constraint
```

## software engineering process
**requirements engineering** -> design -> implementation -> testing -> deployment -> maintenance and evolution
### requirements engineering phases
requirement elicitation -> requirement analysis*-> requirement documentation -> requirement verification*+validation*


- requirement analysis: there might be conflicts between requirements
- requirement verification:did i correctly write what the people said
- validation:ask the people is that what you need

## generic process model

| term | e.g | 
| --- | --- | 
| roles and responsibilities | role:QA<br>responsibility:draft quality requirement;<br>let quality be viewed 
|tools(ppt,word,database,IDE)|word doc
|artifacts(definition of work results)|quality requirement
|activities and methods|NFR framework by a scientist
|milestone(giving the order of artifacts)|be the end of June

## interfaces in RE
the results of requirements engineering are used in 
- budget calculation
- coordination between stakeholders
- contract negotiation and assignment
- design, implementation and integration
- system and user documentation
- evolution
## principle
### activity-orientation vs artifact-orientation

activities-orientation:
process guideline: give you a very specific steps of how should you work

artifact-orientation:
give you an overview of how the result should look like

### problem-orientation vs solution-orientation
#### business process layer:
stakeholders->business process->external system
-----problem orientation
#### usage process layer:
user group->system with tasks->quality requirement&system constraints(they are sub category of non functional requirement)
-----in between problem and solution orientation
#### technical system layer:
break down the tasks in system into logical components->hardware components(sensor,database,web server)
-----solution-orientation

## stakeholders
### identifying them
clients(whoever pays), future user groups,maintainer,legislation
### classifying
passive/active stakeholders,in which phases they are in, how influential they are