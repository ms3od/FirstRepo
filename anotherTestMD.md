###  gh project field-delete [flags]                                        
                                                                              
  Delete a field in a project                                                 
                                                                              
        --format string     Output format: {json}                             
        --id string         ID of the field to delete                         
    -q, --jq expression     Filter JSON output using a jq expression          
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  ###  gh project field-list number [flags]                                   
                                                                              
  List the fields in a project                                                
                                                                              
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
    -L, --limit int         Maximum number of fields to fetch (default 30)    
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  ###  gh project item-add [<number>] [flags]                                 
                                                                              
  Add a pull request or an issue to a project                                 
                                                                              
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
        --url string        URL of the issue or pull request to add to the    
  project                                                                     
                                                                              
  ###  gh project item-archive [<number>] [flags]                             
                                                                              
  Archive an item in a project                                                
                                                                              
        --format string     Output format: {json}                             
        --id string         ID of the item to archive                         
    -q, --jq expression     Filter JSON output using a jq expression          
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
        --undo              Unarchive an item                                 
                                                                              
  ###  gh project item-create [<number>] [flags]                              
                                                                              
  Create a draft issue item in a project                                      
                                                                              
        --body string       Body for the draft issue                          
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
        --title string      Title for the draft issue                         
                                                                              
  ###  gh project item-delete [<number>] [flags]                              
                                                                              
  Delete an item from a project by ID                                         
                                                                              
        --format string     Output format: {json}                             
        --id string         ID of the item to delete                          
    -q, --jq expression     Filter JSON output using a jq expression          
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  ###  gh project item-edit [flags]                                           
                                                                              
  Edit an item in a project                                                   
                                                                              
        --body string                      Body of the draft issue item       
        --clear                            Remove field value                 
        --date string                      Date value for the field (YYYY-MM-DD)
        --field-id string                  ID of the field to update          
        --format string                    Output format: {json}              
        --id string                        ID of the item to edit             
        --iteration-id string              ID of the iteration value to set on
  the field                                                                   
    -q, --jq expression                    Filter JSON output using a jq      
  expression                                                                  
        --number float32                   Number value for the field         
        --project-id string                ID of the project to which the field
  belongs to                                                                  
        --single-select-option-id string   ID of the single select option value to
  set on the field                                                            
    -t, --template string                  Format JSON output using a Go      
  template; see "gh help formatting"                                          
        --text string                      Text value for the field           
        --title string                     Title of the draft issue item      
                                                                              
  ###  gh project item-list [<number>] [flags]                                
                                                                              
  List the items in a project                                                 
                                                                              
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
    -L, --limit int         Maximum number of items to fetch (default 30)     
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  ###  gh project link [<number>] [flag] [flags]                              
                                                                              
  Link a project to a repository or a team                                    
                                                                              
        --owner string   Login of the owner. Use "@me" for the current user.  
    -R, --repo string    The repository to be linked to this project          
    -T, --team string    The team to be linked to this project                
                                                                              
  ###  gh project list [flags]                                                
                                                                              
  List the projects for an owner                                              
                                                                              
        --closed            Include closed projects                           
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
    -L, --limit int         Maximum number of projects to fetch (default 30)  
        --owner string      Login of the owner                                
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -w, --web               Open projects list in the browser                 
                                                                              
  Aliases                                                                     
                                                                              
  gh project ls                                                               
                                                                              
  ###  gh project mark-template [<number>] [flags]                            
                                                                              
  Mark a project as a template                                                
                                                                              
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
        --owner string      Login of the org owner.                           
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
        --undo              Unmark the project as a template.                 
                                                                              
  ###  gh project unlink [<number>] [flag] [flags]                            
                                                                              
  Unlink a project from a repository or a team                                
                                                                              
        --owner string   Login of the owner. Use "@me" for the current user.  
    -R, --repo string    The repository to be unlinked from this project      
    -T, --team string    The team to be unlinked from this project            
                                                                              
  ###  gh project view [<number>] [flags]                                     
                                                                              
  View a project                                                              
                                                                              
        --format string     Output format: {json}                             
    -q, --jq expression     Filter JSON output using a jq expression          
        --owner string      Login of the owner. Use "@me" for the current user.
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -w, --web               Open a project in the browser                     
                                                                              
  ##  gh release <command>                                                    
                                                                              
  Manage releases                                                             
                                                                              
  ###  gh release create [<tag>] [<files>...]                                 
                                                                              
  Create a new release                                                        
                                                                              
        --discussion-category string   Start a discussion in the specified    
  category                                                                    
    -d, --draft                        Save the release as a draft instead of 
  publishing it                                                               
        --generate-notes               Automatically generate title and notes for
  the release                                                                 
        --latest                       Mark this release as "Latest" (default 
  [automatic based on date and version]). --latest=false to explicitly NOT set
  as latest                                                                   
    -n, --notes string                 Release notes                          
    -F, --notes-file file              Read release notes from file (use "-" to
  read from standard input)                                                   
        --notes-from-tag               Automatically generate notes from annotated
  tag                                                                         
        --notes-start-tag string       Tag to use as the starting point for   
  generating release notes                                                    
    -p, --prerelease                   Mark the release as a prerelease       
        --target branch                Target branch or full commit SHA (default
  [main branch])                                                              
    -t, --title string                 Release title                          
        --verify-tag                   Abort in case the git tag doesn't already
  exist in the remote repository                                              
                                                                              
  Aliases                                                                     
                                                                              
  gh release new                                                              
                                                                              
  ###  gh release delete <tag> [flags]                                        
                                                                              
  Delete a release                                                            
                                                                              
        --cleanup-tag   Delete the specified tag in addition to its release   
    -y, --yes           Skip the confirmation prompt                          
                                                                              
  ###  gh release delete-asset <tag> <asset-name> [flags]                     
                                                                              
  Delete an asset from a release                                              
                                                                              
    -y, --yes   Skip the confirmation prompt                                  
                                                                              
  ###  gh release download [<tag>] [flags]                                    
                                                                              
  Download release assets                                                     
                                                                              
    -A, --archive format        Download the source code archive in the specified
  format (zip or tar.gz)                                                      
        --clobber               Overwrite existing files of the same name     
    -D, --dir directory         The directory to download files into (default 
  ".")                                                                        
    -O, --output file           The file to write a single asset to (use "-" to
  write to standard output)                                                   
    -p, --pattern stringArray   Download only assets that match a glob pattern
        --skip-existing         Skip downloading when files of the same name  
  exist                                                                       
                                                                              
  ###  gh release edit <tag>                                                  
                                                                              
  Edit a release                                                              
                                                                              
        --discussion-category string   Start a discussion in the specified    
  category when publishing a draft                                            
        --draft                        Save the release as a draft instead of 
  publishing it                                                               
        --latest                       Explicitly mark the release as "Latest"
    -n, --notes string                 Release notes                          
    -F, --notes-file file              Read release notes from file (use "-" to
  read from standard input)                                                   
        --prerelease                   Mark the release as a prerelease       
        --tag string                   The name of the tag                    
        --target branch                Target branch or full commit SHA (default
  [main branch])                                                              
    -t, --title string                 Release title                          
        --verify-tag                   Abort in case the git tag doesn't already
  exist in the remote repository                                              
                                                                              
  ###  gh release list [flags]                                                
                                                                              
  List releases in a repository                                               
                                                                              
        --exclude-drafts         Exclude draft releases                       
        --exclude-pre-releases   Exclude pre-releases                         
    -q, --jq expression          Filter JSON output using a jq expression     
        --json fields            Output JSON with the specified fields        
    -L, --limit int              Maximum number of items to fetch (default 30)
    -O, --order string           Order of releases returned: {asc|desc} (default
  "desc")                                                                     
    -t, --template string        Format JSON output using a Go template; see "gh
  help formatting"                                                            
                                                                              
  Aliases                                                                     
                                                                              
  gh release ls                                                               
                                                                              
  ###  gh release upload <tag> <files>... [flags]                             
                                                                              
  Upload assets to a release                                                  
                                                                              
    --clobber   Overwrite existing assets of the same name                    
                                                                              
  ###  gh release view [<tag>] [flags]                                        
                                                                              
  View information about a release                                            
                                                                              
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -w, --web               Open the release in the browser                   
                                                                              
  ##  gh repo <command>                                                       
                                                                              
  Manage repositories                                                         
                                                                              
  ###  gh repo archive [<repository>] [flags]                                 
                                                                              
  Archive a repository                                                        
                                                                              
    -y, --yes   Skip the confirmation prompt                                  
                                                                              
  ###  gh repo clone <repository> [<directory>] [-- <gitflags>...]            
                                                                              
  Clone a repository locally                                                  
                                                                              
    -u, --upstream-remote-name string   Upstream remote name when cloning a fork
  (default "upstream")                                                        
                                                                              
  ###  gh repo create [<name>] [flags]                                        
                                                                              
  Create a new repository                                                     
                                                                              
        --add-readme             Add a README file to the new repository      
    -c, --clone                  Clone the new repository to the current      
  directory                                                                   
    -d, --description string     Description of the repository                
        --disable-issues         Disable issues in the new repository         
        --disable-wiki           Disable wiki in the new repository           
    -g, --gitignore string       Specify a gitignore template for the repository
    -h, --homepage URL           Repository home page URL                     
        --include-all-branches   Include all branches from template repository
        --internal               Make the new repository internal             
    -l, --license string         Specify an Open Source License for the       
  repository                                                                  
        --private                Make the new repository private              
        --public                 Make the new repository public               
        --push                   Push local commits to the new repository     
    -r, --remote string          Specify remote name for the new repository   
    -s, --source string          Specify path to local repository to use as   
  source                                                                      
    -t, --team name              The name of the organization team to be granted
  access                                                                      
    -p, --template repository    Make the new repository based on a template  
  repository                                                                  
                                                                              
  Aliases                                                                     
                                                                              
  gh repo new                                                                 
                                                                              
  ###  gh repo delete [<repository>] [flags]                                  
                                                                              
  Delete a repository                                                         
                                                                              
    --yes   confirm deletion without prompting                                
                                                                              
  ###  gh repo deploy-key <command>                                           
                                                                              
  Manage deploy keys in a repository                                          
                                                                              
  ####  gh repo deploy-key add <key-file> [flags]                             
                                                                              
  Add a deploy key to a GitHub repository                                     
                                                                              
    -w, --allow-write    Allow write access for the key                       
    -t, --title string   Title of the new key                                 
                                                                              
  ####  gh repo deploy-key delete <key-id>                                    
                                                                              
  Delete a deploy key from a GitHub repository                                
                                                                              
  ####  gh repo deploy-key list [flags]                                       
                                                                              
  List deploy keys in a GitHub repository                                     
                                                                              
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  Aliases                                                                     
                                                                              
  gh repo deploy-key ls                                                       
                                                                              
  ###  gh repo edit [<repository>] [flags]                                    
                                                                              
  Edit repository settings                                                    
                                                                              
        --add-topic strings        Add repository topic                       
        --allow-forking            Allow forking of an organization repository
        --allow-update-branch      Allow a pull request head branch that is behind
  its base branch to be updated                                               
        --default-branch name      Set the default branch name for the repository
        --delete-branch-on-merge   Delete head branch when pull requests are merged
    -d, --description string       Description of the repository              
        --enable-auto-merge        Enable auto-merge functionality            
        --enable-discussions       Enable discussions in the repository       
        --enable-issues            Enable issues in the repository            
        --enable-merge-commit      Enable merging pull requests via merge commit
        --enable-projects          Enable projects in the repository          
        --enable-rebase-merge      Enable merging pull requests via rebase    
        --enable-squash-merge      Enable merging pull requests via squashed  
  commit                                                                      
        --enable-wiki              Enable wiki in the repository              
    -h, --homepage URL             Repository home page URL                   
        --remove-topic strings     Remove repository topic                    
        --template                 Make the repository available as a template
  repository                                                                  
        --visibility string        Change the visibility of the repository to 
  {public,private,internal}                                                   
                                                                              
  ###  gh repo fork [<repository>] [-- <gitflags>...] [flags]                 
                                                                              
  Create a fork of a repository                                               
                                                                              
    --clone                 Clone the fork                                    
    --default-branch-only   Only include the default branch in the fork       
    --fork-name string      Rename the forked repository                      
    --org string            Create the fork in an organization                
    --remote                Add a git remote for the fork                     
    --remote-name string    Specify the name for the new remote (default      
  "origin")                                                                   
                                                                              
  ###  gh repo list [<owner>] [flags]                                         
                                                                              
  List repositories owned by user or organization                             
                                                                              
        --archived            Show only archived repositories                 
        --fork                Show only forks                                 
    -q, --jq expression       Filter JSON output using a jq expression        
        --json fields         Output JSON with the specified fields           
    -l, --language string     Filter by primary coding language               
    -L, --limit int           Maximum number of repositories to list (default 30)
        --no-archived         Omit archived repositories                      
        --source              Show only non-forks                             
    -t, --template string     Format JSON output using a Go template; see "gh 
  help formatting"                                                            
        --topic strings       Filter by topic                                 
        --visibility string   Filter by repository visibility:                
  {public|private|internal}                                                   
                                                                              
  Aliases                                                                     
                                                                              
  gh repo ls                                                                  
                                                                              
  ###  gh repo rename [<new-name>] [flags]                                    
                                                                              
  Rename a repository                                                         
                                                                              
    -y, --yes   Skip the confirmation prompt                                  
                                                                              
  ###  gh repo set-default [<repository>] [flags]                             
                                                                              
  Configure default repository for this directory                             
                                                                              
    -u, --unset   unset the current default repository                        
    -v, --view    view the current default repository                         
                                                                              
  ###  gh repo sync [<destination-repository>] [flags]                        
                                                                              
  Sync a repository                                                           
                                                                              
    -b, --branch string   Branch to sync (default [default branch])           
        --force           Hard reset the branch of the destination repository to
  match the source repository                                                 
    -s, --source string   Source repository                                   
                                                                              
  ###  gh repo unarchive [<repository>] [flags]                               
                                                                              
  Unarchive a repository                                                      
                                                                              
    -y, --yes   Skip the confirmation prompt                                  
                                                                              
  ###  gh repo view [<repository>] [flags]                                    
                                                                              
  View a repository                                                           
                                                                              
    -b, --branch string     View a specific branch of the repository          
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -w, --web               Open a repository in the browser                  
                                                                              
  ##  gh ruleset <command>                                                    
                                                                              
  View info about repo rulesets                                               
                                                                              
  Aliases                                                                     
                                                                              
  gh rs                                                                       
                                                                              
  ###  gh ruleset check [<branch>] [flags]                                    
                                                                              
  View rules that would apply to a given branch                               
                                                                              
        --default   Check rules on default branch                             
    -w, --web       Open the branch rules page in a web browser               
                                                                              
  ###  gh ruleset list [flags]                                                
                                                                              
  List rulesets for a repository or organization                              
                                                                              
    -L, --limit int    Maximum number of rulesets to list (default 30)        
    -o, --org string   List organization-wide rulesets for the provided       
  organization                                                                
    -p, --parents      Whether to include rulesets configured at higher levels
  that also apply (default true)                                              
    -w, --web          Open the list of rulesets in the web browser           
                                                                              
  Aliases                                                                     
                                                                              
  gh rs ls, gh ruleset ls                                                     
                                                                              
  ###  gh ruleset view [<ruleset-id>] [flags]                                 
                                                                              
  View information about a ruleset                                            
                                                                              
    -o, --org string   Organization name if the provided ID is an organization-
  level ruleset                                                               
    -p, --parents      Whether to include rulesets configured at higher levels
  that also apply (default true)                                              
    -w, --web          Open the ruleset in the browser                        
                                                                              
  ##  gh run <command>                                                        
                                                                              
  View details about workflow runs                                            
                                                                              
  ###  gh run cancel [<run-id>]                                               
                                                                              
  Cancel a workflow run                                                       
                                                                              
  ###  gh run delete [<run-id>]                                               
                                                                              
  Delete a workflow run                                                       
                                                                              
  ###  gh run download [<run-id>] [flags]                                     
                                                                              
  Download artifacts generated by a workflow run                              
                                                                              
    -D, --dir string            The directory to download artifacts into (default
  ".")                                                                        
    -n, --name stringArray      Download artifacts that match any of the given
  names                                                                       
    -p, --pattern stringArray   Download artifacts that match a glob pattern  
                                                                              
  ###  gh run list [flags]                                                    
                                                                              
  List recent workflow runs                                                   
                                                                              
    -a, --all               Include disabled workflows                        
    -b, --branch string     Filter runs by branch                             
    -c, --commit SHA        Filter runs by the SHA of the commit              
        --created date      Filter runs by the date it was created            
    -e, --event event       Filter runs by which event triggered the run      
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -L, --limit int         Maximum number of runs to fetch (default 20)      
    -s, --status string     Filter runs by status:                            
  {queued|completed|in_progress|requested|waiting|action_required|cancelled|failure|neutral|skipped|stale|startup_failure|success|timed_out}
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -u, --user string       Filter runs by user who triggered the run         
    -w, --workflow string   Filter runs by workflow                           
                                                                              
  Aliases                                                                     
                                                                              
  gh run ls                                                                   
                                                                              
  ###  gh run rerun [<run-id>] [flags]                                        
                                                                              
  Rerun a run                                                                 
                                                                              
    -d, --debug        Rerun with debug logging                               
        --failed       Rerun only failed jobs, including dependencies         
    -j, --job string   Rerun a specific job ID from a run, including dependencies
                                                                              
  ###  gh run view [<run-id>] [flags]                                         
                                                                              
  View a summary of a workflow run                                            
                                                                              
    -a, --attempt uint      The attempt number of the workflow run            
        --exit-status       Exit with non-zero status if run failed           
    -j, --job string        View a specific job ID from a run                 
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
        --log               View full log for either a run or specific job    
        --log-failed        View the log for any failed steps in a run or     
  specific job                                                                
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -v, --verbose           Show job steps                                    
    -w, --web               Open run in the browser                           
                                                                              
  ###  gh run watch <run-id> [flags]                                          
                                                                              
  Watch a run until it completes, showing its progress                        
                                                                              
        --exit-status    Exit with non-zero status if run fails               
    -i, --interval int   Refresh interval in seconds (default 3)              
                                                                              
  ##  gh search <command>                                                     
                                                                              
  Search for repositories, issues, and pull requests                          
                                                                              
  ###  gh search code <query> [flags]                                         
                                                                              
  Search within code                                                          
                                                                              
        --extension string   Filter on file extension                         
        --filename string    Filter on filename                               
    -q, --jq expression      Filter JSON output using a jq expression         
        --json fields        Output JSON with the specified fields            
        --language string    Filter results by language                       
    -L, --limit int          Maximum number of code results to fetch (default 30)
        --match strings      Restrict search to file contents or file path:   
  {file|path}                                                                 
        --owner strings      Filter on owner                                  
    -R, --repo strings       Filter on repository                             
        --size string        Filter on size range, in kilobytes               
    -t, --template string    Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -w, --web                Open the search query in the web browser         
                                                                              
  ###  gh search commits [<query>] [flags]                                    
                                                                              
  Search for commits                                                          
                                                                              
        --author string            Filter by author                           
        --author-date date         Filter based on authored date              
        --author-email string      Filter on author email                     
        --author-name string       Filter on author name                      
        --committer string         Filter by committer                        
        --committer-date date      Filter based on committed date             
        --committer-email string   Filter on committer email                  
        --committer-name string    Filter on committer name                   
        --hash string              Filter by commit hash                      
    -q, --jq expression            Filter JSON output using a jq expression   
        --json fields              Output JSON with the specified fields      
    -L, --limit int                Maximum number of commits to fetch (default
  30)                                                                         
        --merge                    Filter on merge commits                    
        --order string             Order of commits returned, ignored unless '--
  sort' flag is specified: {asc|desc} (default "desc")                        
        --owner strings            Filter on repository owner                 
        --parent string            Filter by parent hash                      
    -R, --repo strings             Filter on repository                       
        --sort string              Sort fetched commits: {author-date|committer-
  date} (default "best-match")                                                
    -t, --template string          Format JSON output using a Go template; see
  "gh help formatting"                                                        
        --tree string              Filter by tree hash                        
        --visibility strings       Filter based on repository visibility:     
  {public|private|internal}                                                   
    -w, --web                      Open the search query in the web browser   
                                                                              
  ###  gh search issues [<query>] [flags]                                     
                                                                              
  Search for issues                                                           
                                                                              
        --app string             Filter by GitHub App author                  
        --archived               Filter based on the repository archived state
  {true|false}                                                                
        --assignee string        Filter by assignee                           
        --author string          Filter by author                             
        --closed date            Filter on closed at date                     
        --commenter user         Filter based on comments by user             
        --comments number        Filter on number of comments                 
        --created date           Filter based on created at date              
        --include-prs            Include pull requests in results             
        --interactions number    Filter on number of reactions and comments   
        --involves user          Filter based on involvement of user          
    -q, --jq expression          Filter JSON output using a jq expression     
        --json fields            Output JSON with the specified fields        
        --label strings          Filter on label                              
        --language string        Filter based on the coding language          
    -L, --limit int              Maximum number of results to fetch (default 30)
        --locked                 Filter on locked conversation status         
        --match strings          Restrict search to specific field of issue:  
  {title|body|comments}                                                       
        --mentions user          Filter based on user mentions                
        --milestone title        Filter by milestone title                    
        --no-assignee            Filter on missing assignee                   
        --no-label               Filter on missing label                      
        --no-milestone           Filter on missing milestone                  
        --no-project             Filter on missing project                    
        --order string           Order of results returned, ignored unless '--
  sort' flag is specified: {asc|desc} (default "desc")                        
        --owner strings          Filter on repository owner                   
        --project owner/number   Filter on project board owner/number         
        --reactions number       Filter on number of reactions                
    -R, --repo strings           Filter on repository                         
        --sort string            Sort fetched results:                        
  {comments|created|interactions|reactions|reactions-+1|reactions--1|reactions-
  heart|reactions-smile|reactions-tada|reactions-thinking_face|updated} (default
  "best-match")                                                               
        --state string           Filter based on state: {open|closed}         
        --team-mentions string   Filter based on team mentions                
    -t, --template string        Format JSON output using a Go template; see "gh
  help formatting"                                                            
        --updated date           Filter on last updated at date               
        --visibility strings     Filter based on repository visibility:       
  {public|private|internal}                                                   
    -w, --web                    Open the search query in the web browser     
                                                                              
  ###  gh search prs [<query>] [flags]                                        
                                                                              
  Search for pull requests                                                    
                                                                              
        --app string              Filter by GitHub App author                 
        --archived                Filter based on the repository archived state
  {true|false}                                                                
        --assignee string         Filter by assignee                          
        --author string           Filter by author                            
    -B, --base string             Filter on base branch name                  
        --checks string           Filter based on status of the checks:       
  {pending|success|failure}                                                   
        --closed date             Filter on closed at date                    
        --commenter user          Filter based on comments by user            
        --comments number         Filter on number of comments                
        --created date            Filter based on created at date             
        --draft                   Filter based on draft state                 
    -H, --head string             Filter on head branch name                  
        --interactions number     Filter on number of reactions and comments  
        --involves user           Filter based on involvement of user         
    -q, --jq expression           Filter JSON output using a jq expression    
        --json fields             Output JSON with the specified fields       
        --label strings           Filter on label                             
        --language string         Filter based on the coding language         
    -L, --limit int               Maximum number of results to fetch (default 30)
        --locked                  Filter on locked conversation status        
        --match strings           Restrict search to specific field of issue: 
  {title|body|comments}                                                       
        --mentions user           Filter based on user mentions               
        --merged                  Filter based on merged state                
        --merged-at date          Filter on merged at date                    
        --milestone title         Filter by milestone title                   
        --no-assignee             Filter on missing assignee                  
        --no-label                Filter on missing label                     
        --no-milestone            Filter on missing milestone                 
        --no-project              Filter on missing project                   
        --order string            Order of results returned, ignored unless '--
  sort' flag is specified: {asc|desc} (default "desc")                        
        --owner strings           Filter on repository owner                  
        --project owner/number    Filter on project board owner/number        
        --reactions number        Filter on number of reactions               
    -R, --repo strings            Filter on repository                        
        --review string           Filter based on review status:              
  {none|required|approved|changes_requested}                                  
        --review-requested user   Filter on user or team requested to review  
        --reviewed-by user        Filter on user who reviewed                 
        --sort string             Sort fetched results:                       
  {comments|reactions|reactions-+1|reactions--1|reactions-smile|reactions-    
  thinking_face|reactions-heart|reactions-tada|interactions|created|updated}  
  (default "best-match")                                                      
        --state string            Filter based on state: {open|closed}        
        --team-mentions string    Filter based on team mentions               
    -t, --template string         Format JSON output using a Go template; see "gh
  help formatting"                                                            
        --updated date            Filter on last updated at date              
        --visibility strings      Filter based on repository visibility:      
  {public|private|internal}                                                   
    -w, --web                     Open the search query in the web browser    
                                                                              
  ###  gh search repos [<query>] [flags]                                      
                                                                              
  Search for repositories                                                     
                                                                              
        --archived                    Filter based on the repository archived 
  state {true|false}                                                          
        --created date                Filter based on created at date         
        --followers number            Filter based on number of followers     
        --forks number                Filter on number of forks               
        --good-first-issues number    Filter on number of issues with the 'good
  first issue' label                                                          
        --help-wanted-issues number   Filter on number of issues with the 'help
  wanted' label                                                               
        --include-forks string        Include forks in fetched repositories:  
  {false|true|only}                                                           
    -q, --jq expression               Filter JSON output using a jq expression
        --json fields                 Output JSON with the specified fields   
        --language string             Filter based on the coding language     
        --license strings             Filter based on license type            
    -L, --limit int                   Maximum number of repositories to fetch 
  (default 30)                                                                
        --match strings               Restrict search to specific field of    
  repository: {name|description|readme}                                       
        --number-topics number        Filter on number of topics              
        --order string                Order of repositories returned, ignored 
  unless '--sort' flag is specified: {asc|desc} (default "desc")              
        --owner strings               Filter on owner                         
        --size string                 Filter on a size range, in kilobytes    
        --sort string                 Sort fetched repositories: {forks|help- 
  wanted-issues|stars|updated} (default "best-match")                         
        --stars number                Filter on number of stars               
    -t, --template string             Format JSON output using a Go template; see
  "gh help formatting"                                                        
        --topic strings               Filter on topic                         
        --updated date                Filter on last updated at date          
        --visibility strings          Filter based on visibility:             
  {public|private|internal}                                                   
    -w, --web                         Open the search query in the web browser
                                                                              
  ##  gh secret <command>                                                     
                                                                              
  Manage GitHub secrets                                                       
                                                                              
  ###  gh secret delete <secret-name> [flags]                                 
                                                                              
  Delete secrets                                                              
                                                                              
    -a, --app string   Delete a secret for a specific application:            
  {actions|codespaces|dependabot}                                             
    -e, --env string   Delete a secret for an environment                     
    -o, --org string   Delete a secret for an organization                    
    -u, --user         Delete a secret for your user                          
                                                                              
  Aliases                                                                     
                                                                              
  gh secret remove                                                            
                                                                              
  ###  gh secret list [flags]                                                 
                                                                              
  List secrets                                                                
                                                                              
    -a, --app string        List secrets for a specific application:          
  {actions|codespaces|dependabot}                                             
    -e, --env string        List secrets for an environment                   
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -o, --org string        List secrets for an organization                  
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
    -u, --user              List a secret for your user                       
                                                                              
  Aliases                                                                     
                                                                              
  gh secret ls                                                                
                                                                              
  ###  gh secret set <secret-name> [flags]                                    
                                                                              
  Create or update secrets                                                    
                                                                              
    -a, --app string           Set the application for a secret:              
  {actions|codespaces|dependabot}                                             
    -b, --body string          The value for the secret (reads from standard  
  input if not specified)                                                     
    -e, --env environment      Set deployment environment secret              
    -f, --env-file file        Load secret names and values from a dotenv-formatted
  file                                                                        
        --no-store             Print the encrypted, base64-encoded value instead
  of storing it on GitHub                                                     
    -o, --org organization     Set organization secret                        
    -r, --repos repositories   List of repositories that can access an        
  organization or user secret                                                 
    -u, --user                 Set a secret for your user                     
    -v, --visibility string    Set visibility for an organization secret:     
  {all|private|selected} (default "private")                                  
                                                                              
  ##  gh ssh-key <command>                                                    
                                                                              
  Manage SSH keys                                                             
                                                                              
  ###  gh ssh-key add [<key-file>] [flags]                                    
                                                                              
  Add an SSH key to your GitHub account                                       
                                                                              
    -t, --title string   Title for the new key                                
        --type string    Type of the ssh key: {authentication|signing} (default
  "authentication")                                                           
                                                                              
  ###  gh ssh-key delete <id> [flags]                                         
                                                                              
  Delete an SSH key from your GitHub account                                  
                                                                              
    -y, --yes   Skip the confirmation prompt                                  
                                                                              
  ###  gh ssh-key list                                                        
                                                                              
  Lists SSH keys in your GitHub account                                       
                                                                              
  Aliases                                                                     
                                                                              
  gh ssh-key ls                                                               
                                                                              
  ##  gh status [flags]                                                       
                                                                              
  Print information about relevant issues, pull requests, and notifications   
  across repositories                                                         
                                                                              
    -e, --exclude strings   Comma separated list of repos to exclude in       
  owner/name format                                                           
    -o, --org string        Report status within an organization              
                                                                              
  ##  gh variable <command>                                                   
                                                                              
  Manage GitHub Actions variables                                             
                                                                              
  ###  gh variable delete <variable-name> [flags]                             
                                                                              
  Delete variables                                                            
                                                                              
    -e, --env string   Delete a variable for an environment                   
    -o, --org string   Delete a variable for an organization                  
                                                                              
  Aliases                                                                     
                                                                              
  gh variable remove                                                          
                                                                              
  ###  gh variable get <variable-name> [flags]                                
                                                                              
  Get variables                                                               
                                                                              
    -e, --env string        Get a variable for an environment                 
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -o, --org string        Get a variable for an organization                
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  ###  gh variable list [flags]                                               
                                                                              
  List variables                                                              
                                                                              
    -e, --env string        List variables for an environment                 
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -o, --org string        List variables for an organization                
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  Aliases                                                                     
                                                                              
  gh variable ls                                                              
                                                                              
  ###  gh variable set <variable-name> [flags]                                
                                                                              
  Create or update variables                                                  
                                                                              
    -b, --body string          The value for the variable (reads from standard
  input if not specified)                                                     
    -e, --env environment      Set deployment environment variable            
    -f, --env-file file        Load variable names and values from a dotenv-  
  formatted file                                                              
    -o, --org organization     Set organization variable                      
    -r, --repos repositories   List of repositories that can access an        
  organization variable                                                       
    -v, --visibility string    Set visibility for an organization variable:   
  {all|private|selected} (default "private")                                  
                                                                              
  ##  gh workflow <command>                                                   
                                                                              
  View details about GitHub Actions workflows                                 
                                                                              
  ###  gh workflow disable [<workflow-id> | <workflow-name>]                  
                                                                              
  Disable a workflow                                                          
                                                                              
  ###  gh workflow enable [<workflow-id> | <workflow-name>]                   
                                                                              
  Enable a workflow                                                           
                                                                              
  ###  gh workflow list [flags]                                               
                                                                              
  List workflows                                                              
                                                                              
    -a, --all               Include disabled workflows                        
    -q, --jq expression     Filter JSON output using a jq expression          
        --json fields       Output JSON with the specified fields             
    -L, --limit int         Maximum number of workflows to fetch (default 50) 
    -t, --template string   Format JSON output using a Go template; see "gh help
  formatting"                                                                 
                                                                              
  Aliases                                                                     
                                                                              
  gh workflow ls                                                              
                                                                              
  ###  gh workflow run [<workflow-id> | <workflow-name>] [flags]              
                                                                              
  Run a workflow by creating a workflow_dispatch event                        
                                                                              
    -F, --field key=value       Add a string parameter in key=value format,   
  respecting @ syntax (see "gh help api").                                    
        --json                  Read workflow inputs as JSON via STDIN        
    -f, --raw-field key=value   Add a string parameter in key=value format    
    -r, --ref string            The branch or tag name which contains the version
  of the workflow file you'd like to run                                      
                                                                              
  ###  gh workflow view [<workflow-id> | <workflow-name> | <filename>] [flags] 
                                                                              
  View the summary of a workflow                                              
                                                                              
    -r, --ref string   The branch or tag name which contains the version of the
  workflow file you'd like to view                                            
    -w, --web          Open workflow in the browser                           
    -y, --yaml         View the workflow yaml file                            
