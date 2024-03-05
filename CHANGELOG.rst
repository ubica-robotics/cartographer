^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package cartographer
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Forthcoming
-----------
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
