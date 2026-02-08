# Contributing to the template project

## Before reporting an issue...

- search under `issues` for an already reported issue

### Reporting security issues

The maintainers take security seriously. If you discover a security
issue, please bring it to their attention right away!

### If you found an issue that describes your problem

 - please read other user comments first, and confirm this is the same issue: a given error condition might be indicative of different problems - you may also find a workaround in the comments
 - please refrain from adding `same thing here` or `+1` comments
 - you do not need to comment on an issue to get notified of updates: just hit the "subscribe" button
 - comment if you have some new, technical and relevant information to add to the case
 - __DO NOT__ comment on closed issues or merged PRs. If you think you have a related problem, open up a new issue and reference the PR or issue.

### If you have not found an existing issue that describes your problem

 1. create a new issue, with a meanful title that describes your issue:
   - bad title: "It does not work with my docker"
   - good title: "CI build failed: error with xyz"
 2. copy the output
 3. copy the command line you used to launch your project
 4. provide any relevant detail about your specific configuration (e.g. ESP32 module)
 
## Contributing Code

Contributions should be made via pull requests. Pull requests will be reviewed
by one or more maintainers or reviewers and merged when acceptable.

You should follow the basic GitHub workflow:

 1. Use your own [fork](https://help.github.com/en/articles/about-forks)
 2. Create your change, for examples use the `/examples` directory and add `; src_dir` at the beginning of [platformio.ini](platformio.ini)
 3. Test your code
 4. Commit your code
 5. Push your change to your fork and create a [Pull Request](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request-from-a-fork) with meanful PR-title and PR-description 
