; Drupal.org release file.
core = 7.x
api = 2

; Other contribs.
projects[http_client][version] = 2.4
projects[http_client][subdir] = "contrib"
projects[oauth][version] = 3.x-dev
projects[oauth][subdir] = "contrib"
projects[oauth][patch][] = "http://drupal.org/files/980340-d7.patch"
projects[connector][version] = 1.x-dev
projects[connector][subdir] = "contrib"
projects[oauthconnector][version] = 1.x-dev
projects[oauthconnector][subdir] = "contrib"
projects[oauthconnector][patch][] = "http://drupal.org/files/oathuconnector-notice-no-csid.patch"
projects[oauthconnector][patch][] = "http://drupal.org/files/oauthconnector-fix-ctools-exportables-1712262-2.patch"
projects[oauthconnector][patch][] = "http://drupal.org/files/1764028-oauthconnector-fix-css-class.patch"
projects[service_links][version] = 2.1
projects[service_links][subdir] = "contrib"
projects[service_links][patch][] = "http://drupal.org/files/twitter-share-button-ssl-page-1524562-5.patch"



