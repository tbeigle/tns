module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    watch: {
      sass: {
        files: ['_scss/**/*.{scss,sass}'],
        tasks: ['sass:dist']
      }
    },
    sass: {
      dist: {
        files: [{
          expand: true,
          cwd: '_scss',
          src: '*.{scss,sass}',
          dest: 'css',
          ext: '.css'
        }]
      }
    },
    imagemin: {
      dynamic: {
        files: [{
          expand: true,
          cwd: 'images',
          src: ['**/*.{png,jpg,gif}'],
          dest: 'images'
        }]
      }
    }
  });
  grunt.registerTask('default', ['sass:dist', 'imagemin', 'watch']);
  grunt.loadNpmTasks('grunt-contrib-sass');
  grunt.loadNpmTasks('grunt-contrib-imagemin');
  grunt.loadNpmTasks('grunt-contrib-watch');
};
