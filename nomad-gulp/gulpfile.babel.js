import gulp from "gulp";
import del from "del";
import ws from "gulp-webserver";
import ghtml from "gulp-html";
import htmlMinify from "gulp-htmlmin";
import image from "gulp-image";
import gulp_sass from "gulp-sass";
import node_sass from "node-sass";
import autoprefixer from "gulp-autoprefixer";
import cssMinify from "gulp-csso";
import bro from "gulp-bro";
import babelify from "babelify";

const sass = gulp_sass(node_sass);

const routes = {
  html: {
    watch: "src/**/*.html",
    src: "src/*.html",
    dest: "build",
  },
  img: {
    watch: "src/img/*",
    src: "src/img/*",
    dest: "build/img",
  },
  scss: {
    watch: "src/scss/**/*.scss",
    src: "src/scss/*.scss",
    dest: "build/css",
  },
  js: {
    watch: "src/js/**/*.js",
    src: "src/js/main.js",
    dest: "build/js",
  },
};

const clean = () => del(["build"]);

const html = () =>
  gulp
    .src(routes.html.src)
    .pipe(ghtml())
    .pipe(htmlMinify({ collapseWhitespace: true }))
    .pipe(gulp.dest(routes.html.dest));

const styles = () =>
  gulp
    .src(routes.scss.src)
    .pipe(sass().on("error", sass.logError))
    .pipe(autoprefixer())
    .pipe(cssMinify())
    .pipe(gulp.dest(routes.scss.dest));

const img = () =>
  gulp.src(routes.img.src).pipe(image()).pipe(gulp.dest(routes.img.dest));

const js = () =>
  gulp
    .src(routes.js.src)
    .pipe(
      bro({
        transform: [
          babelify.configure({ presets: ["@babel/preset-env"] }),
          ["uglifyify", { global: true }],
        ],
      })
    )
    .pipe(gulp.dest(routes.js.dest));

const watch = () => {
  gulp.watch(routes.img.watch, img);
  gulp.watch(routes.html.watch, html);
  gulp.watch(routes.scss.watch, styles);
  gulp.watch(routes.js.watch, js);
};

const webserver = () =>
  gulp.src("build").pipe(ws({ livereload: true, open: true }));

const prepare = gulp.series([clean, img]);

const assets = gulp.series([html, styles, js]);

const live = gulp.series([webserver, watch]);

export const dev = gulp.series([prepare, assets, live]);
