# Error Report 0002  

## Error message
`remote: Permision to repository denied`  
`fatal: unable to access ... 403`  

## Category  
Git Authentication  

## What Happened ?  

GitHub refused the push request.  
The repo existed, but GH did not allow the current authentication  

## Possible causes  

- Invalid Personal Access Token
- Token without repository permissions
- Wrong GitHub username
- Cached credentials  

## Solutions  

Verify:  

- Remote URL
- GH username
- PAT permissions  

Clear old credentials if necessary.  

## Rule to remember

A Git remote tells Git WHERE to send code.  
Authentication tells Git WHO is allowed to send code.  
USE THE CLASSIC TOKEN !!!
