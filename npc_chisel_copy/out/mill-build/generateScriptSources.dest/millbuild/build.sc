package millbuild

import _root_.mill.runner.MillBuildRootModule

object MiscInfo_build {
  implicit lazy val millBuildRootModuleInfo: _root_.mill.runner.MillBuildRootModule.Info = _root_.mill.runner.MillBuildRootModule.Info(
    Vector("/home/jimple/Documents/ysyx/ysyx-workbench/npc/out/mill-launcher/0.11.5.jar").map(_root_.os.Path(_)),
    _root_.os.Path("/home/jimple/Documents/ysyx/ysyx-workbench/npc"),
    _root_.os.Path("/home/jimple/Documents/ysyx/ysyx-workbench/npc"),
    _root_.scala.Seq()
  )
  implicit lazy val millBaseModuleInfo: _root_.mill.main.RootModule.Info = _root_.mill.main.RootModule.Info(
    millBuildRootModuleInfo.projectRoot,
    _root_.mill.define.Discover[build]
  )
}
import MiscInfo_build.{millBuildRootModuleInfo, millBaseModuleInfo}
object build extends build
class build extends _root_.mill.main.RootModule {

//MILL_ORIGINAL_FILE_PATH=/home/jimple/Documents/ysyx/ysyx-workbench/npc/build.sc
//MILL_USER_CODE_START_MARKER
// import Mill dependency
import mill._
import mill.scalalib._
import mill.scalalib.scalafmt.ScalafmtModule
import mill.scalalib.TestModule.Utest
// support BSP
import mill.bsp._

object playground extends ScalaModule with ScalafmtModule { m =>
  val useChisel5 = true
  override def scalaVersion = "2.13.10"
  override def scalacOptions = Seq(
    "-language:reflectiveCalls",
    "-deprecation",
    "-feature",
    "-Xcheckinit"
  )
  override def ivyDeps = Agg(
    if (useChisel5) ivy"org.chipsalliance::chisel:5.0.0" else
    ivy"edu.berkeley.cs::chisel3:3.6.0",
  )
  override def scalacPluginIvyDeps = Agg(
    if (useChisel5) ivy"org.chipsalliance:::chisel-plugin:5.0.0" else
    ivy"edu.berkeley.cs:::chisel3-plugin:3.6.0",
  )
  object test extends ScalaTests with TestModule.Utest {
    override def ivyDeps = m.ivyDeps() ++ Agg(
      ivy"com.lihaoyi::utest:0.8.1",
      if (useChisel5) ivy"edu.berkeley.cs::chiseltest:5.0.0" else
      ivy"edu.berkeley.cs::chiseltest:0.6.0",
    )
  }
  def repositoriesTask = T.task { Seq(
    coursier.MavenRepository("https://maven.aliyun.com/repository/central"),
    coursier.MavenRepository("https://repo.scala-sbt.org/scalasbt/maven-releases"),
  ) ++ super.repositoriesTask() }
}

}