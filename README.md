[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=11537768&assignment_repo_type=AssignmentRepo)

# Movie Recommender 
 > Authors: \<[Navjot Brar](https://github.com/navbraar)\>
 \<[Sanya Jain](https://github.com/sanyajain243)\>
>  \<[Sakshi Nikte](https://github.com/snikt001)\>
>  \<[Bansri Patel](https://github.com/bpate063)\>

## Project Description
 > This project is based on providing the user with a list movies that they might like based on their inputted preferences and organizing a list of movies based on shared criteria. 
 > * We chose this project because it allows us to understand how the behavior of an application should work based on the input of a user and organize data in ways that makes it easier to understand and navigate. 
 > * For this project, we plan to use C++ within VisualStudioCode and GitHub to track our progress.
 > * For the input, a user will provide a name of a movie that they like and the application will output a list of movies that the user
might like based on their selection. Using various recommendation algorithms, the resulting recommendations will be sorted based on the movie genre, actors, director, etc.
 > * The features of this project include listing recommendations based on different criteria and grouping together movies that fall under similar preferences. The user will have the option to type in their own preferences such as a movie title, genre, actors, etc.

## User Interface Specification
### Navigation Diagram
> ![Screenshot 2023-08-19 191828](https://github.com/cs100/final-project-group-8-project/assets/138830479/24f552b8-1bd9-44b7-ba6e-99acc77230ef)
>
> The diagram represents how a user would traverse the program, starting from the welcome screen which asks the user to select a category, followed by a prompt to narrow down their choice even more, this can be through another menu or through a user input string.

### Screen Layouts
> When running the program, the first screen welcomes the user to the movie recommender and prompts them to select a category through a menu with the options being by 'Genre', 'Rating', 'Lead Actor', and 'Director'. If the user selects 'Genre', the user is taken to a screen which prompts them to select the genre from a list of different genres. For every other category the user is prompted to type in either a rating, name of an actor, or the name of a director in order to see movies that follow that criteria. After the user is done selecting, they are presented with a list of movies based on the criteria they selected.

## Class Diagram
> ![Blank diagram (1)](https://github.com/cs100/final-project-group-8-project/assets/100013790/f418d5e7-89dc-4ed8-8096-8b76bc7400dd)
> Each movie has a director, lead actor, genre, and rating. Based on the criteria chosen by the user, a movie is updated as a recommendation. Each recommendation is still associated with a user and movie. 
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
