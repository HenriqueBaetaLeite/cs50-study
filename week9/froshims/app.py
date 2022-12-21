from Flask import flask, render_template, request

app = Flaks(__name__)

@route("/")
  def index():
    return render_template("index.html")