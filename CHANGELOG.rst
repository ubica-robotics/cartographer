^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package cartographer
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Forthcoming
-----------
* [DEV-15831] Added adaptive motion filter feature (`#3 <https://github.com/ubica-robotics/cartographer/issues/3>`_)
* Release 2.0.9003
* Update cartographer to deal with newer ceres (`#24 <https://github.com/ubica-robotics/cartographer/issues/24>`_)
  Otherwise modern gcc complains that these are
  possibly used uninitialized.
* Release 2.0.9002.
* Remove CERES_INCLUDE_DIRS.
* Release 2.0.9001.
* Make sure to depend on libabsl-dev.
* Fixes on top of 2.0.0.
  This makes it so we compile warning-free on Ubuntu Jammy.
* Release 1.0.9001.
* Also add googletest as a build dependency.
* Switch to python3-sphinx dependency.
* Switch the versioning system to 1.0.9000.
  See the comment for more details on how and why.
* Workaround warning about not finding GOOGLETEST_VERSION.
* Fix warning about move elision.
* Disable failing test.
* fix compiler warning about comparison between signed and unsigned in test (`#12 <https://github.com/ubica-robotics/cartographer/issues/12>`_)
* restrict boost dependencies to the ones used
* Update the package.xml dependencies.
* Switch maintainers to Open Robotics.
  Also update the authors to include the people from Robotis
  who did the work to update here.
* Prepare 1.0.0-RC1 release
* Contributors: Chris Lalancette, Christoph Schütte, Dirk Thomas, Divin Devaiah, Mikael Arguedas

102.1.0 (2024-03-05)
--------------------
* Dev 8095 extend cartographer to adaptively switch to and from scan matching based on odom data (`#2 <https://github.com/ubica-robotics/cartographer/issues/2>`_)
  * [DEV-8095] Extended carto to handle adaptive scan matching
  * [DEV-8095] Handles adaptive scan matching data in collated trajectory builder
  ---------
  Authored-by: devaiah.arun <devaiah.arun@ubica-robotics.eu>
* Contributors: Divin Devaiah

102.0.0 (2024-03-05)
--------------------
* Add note for ROS users. (`#1941 <https://github.com/ubica-robotics/cartographer/issues/1941>`_)
  * update rules_boost to latest version (`#1898 <https://github.com/ubica-robotics/cartographer/issues/1898>`_)
  * Add note for ROS users.
  * spelling errors.
  ---------
  Co-authored-by: Xùdōng Yáng <wyverald@gmail.com>
* update rules_boost to latest version (`#1898 <https://github.com/ubica-robotics/cartographer/issues/1898>`_)
* Add Debian Bullseye to the install scripts, CI, docs. (`#1897 <https://github.com/ubica-robotics/cartographer/issues/1897>`_)
* removed unused param from cmake macro (`#1847 <https://github.com/ubica-robotics/cartographer/issues/1847>`_)
* Fix crash caused by setting gravity lower bound (`#1893 <https://github.com/ubica-robotics/cartographer/issues/1893>`_)
* Remove Debian Stretch from CI. (`#1895 <https://github.com/ubica-robotics/cartographer/issues/1895>`_)
  It has reached end-of-life with the
  end of LTS on June 30, 2022.
* Fix CI for Ubuntu 18.04 by disabling gRPC test build for now. (`#1891 <https://github.com/ubica-robotics/cartographer/issues/1891>`_)
* Fix typo in trajectory_builder_3d.lua (`#1870 <https://github.com/ubica-robotics/cartographer/issues/1870>`_)
  Fix the comment (`use_intensites` -> `use_intensities`)
* Add Ubuntu 22.04 to the install scripts, CI, docs. (`#1888 <https://github.com/ubica-robotics/cartographer/issues/1888>`_)
* Add libabsl-dev to the package.xml dependencies. (`#1875 <https://github.com/ubica-robotics/cartographer/issues/1875>`_)
  This will allow the ROS buildfarm to properly install dependencies
  when attempting to build this package.
* Move to GitHub Actions for CI. (`#1884 <https://github.com/ubica-robotics/cartographer/issues/1884>`_)
  This moves away from travis-ci.org which no longer works.
* Remove Ubuntu Xenial from CI. (`#1833 <https://github.com/ubica-robotics/cartographer/issues/1833>`_)
  Ubuntu 16.04 has reached end of standard support.
* Contributors: Chris Lalancette, Katherine Scott, Linh Nguyen, Takashi Ogura, Wolfgang Hess, XiaotaoGuo, Xùdōng Yáng

2.0.0 (2021-03-09)
------------------
https://github.com/cartographer-project/cartographer/compare/1.0.0...2.0.0

1.0.0 (2018-06-01)
------------------
https://github.com/googlecartographer/cartographer/compare/0.3.0...1.0.0

0.3.0 (2017-11-23)
------------------
https://github.com/googlecartographer/cartographer/compare/0.2.0...0.3.0

0.2.0 (2017-06-19)
------------------
https://github.com/googlecartographer/cartographer/compare/0.1.0...0.2.0

0.1.0 (2017-05-18)
------------------
* First unstable development release
