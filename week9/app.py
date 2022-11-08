from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
  # name = request.args.get("name", "world")
  # the line above is the same result as below
  # if "name" in request.args:
  #   name = request.args["name"]
  # else:
  #   name = "world"
  return render_template("index.html")

@app.route("/greet", methods=["POST"])
def greet():
  name = request.args.get("name", "world")
  return render_template("greet.html", name=name)