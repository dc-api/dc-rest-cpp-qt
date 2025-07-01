/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIGithubWebhook.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGithubWebhook::OAIGithubWebhook(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGithubWebhook::OAIGithubWebhook() {
    this->initializeModel();
}

OAIGithubWebhook::~OAIGithubWebhook() {}

void OAIGithubWebhook::initializeModel() {

    m_sender_isSet = false;
    m_sender_isValid = false;

    m_action_isSet = false;
    m_action_isValid = false;

    m_ref_isSet = false;
    m_ref_isValid = false;

    m_ref_type_isSet = false;
    m_ref_type_isValid = false;

    m_comment_isSet = false;
    m_comment_isValid = false;

    m_issue_isSet = false;
    m_issue_isValid = false;

    m_pull_request_isSet = false;
    m_pull_request_isValid = false;

    m_repository_isSet = false;
    m_repository_isValid = false;

    m_forkee_isSet = false;
    m_forkee_isValid = false;

    m_member_isSet = false;
    m_member_isValid = false;

    m_release_isSet = false;
    m_release_isValid = false;

    m_head_commit_isSet = false;
    m_head_commit_isValid = false;

    m_commits_isSet = false;
    m_commits_isValid = false;

    m_forced_isSet = false;
    m_forced_isValid = false;

    m_compare_isSet = false;
    m_compare_isValid = false;

    m_review_isSet = false;
    m_review_isValid = false;

    m_check_run_isSet = false;
    m_check_run_isValid = false;

    m_check_suite_isSet = false;
    m_check_suite_isValid = false;

    m_discussion_isSet = false;
    m_discussion_isValid = false;

    m_answer_isSet = false;
    m_answer_isValid = false;
}

void OAIGithubWebhook::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGithubWebhook::fromJsonObject(QJsonObject json) {

    m_sender_isValid = ::dc_rest::fromJsonValue(m_sender, json[QString("sender")]);
    m_sender_isSet = !json[QString("sender")].isNull() && m_sender_isValid;

    m_action_isValid = ::dc_rest::fromJsonValue(m_action, json[QString("action")]);
    m_action_isSet = !json[QString("action")].isNull() && m_action_isValid;

    m_ref_isValid = ::dc_rest::fromJsonValue(m_ref, json[QString("ref")]);
    m_ref_isSet = !json[QString("ref")].isNull() && m_ref_isValid;

    m_ref_type_isValid = ::dc_rest::fromJsonValue(m_ref_type, json[QString("ref_type")]);
    m_ref_type_isSet = !json[QString("ref_type")].isNull() && m_ref_type_isValid;

    m_comment_isValid = ::dc_rest::fromJsonValue(m_comment, json[QString("comment")]);
    m_comment_isSet = !json[QString("comment")].isNull() && m_comment_isValid;

    m_issue_isValid = ::dc_rest::fromJsonValue(m_issue, json[QString("issue")]);
    m_issue_isSet = !json[QString("issue")].isNull() && m_issue_isValid;

    m_pull_request_isValid = ::dc_rest::fromJsonValue(m_pull_request, json[QString("pull_request")]);
    m_pull_request_isSet = !json[QString("pull_request")].isNull() && m_pull_request_isValid;

    m_repository_isValid = ::dc_rest::fromJsonValue(m_repository, json[QString("repository")]);
    m_repository_isSet = !json[QString("repository")].isNull() && m_repository_isValid;

    m_forkee_isValid = ::dc_rest::fromJsonValue(m_forkee, json[QString("forkee")]);
    m_forkee_isSet = !json[QString("forkee")].isNull() && m_forkee_isValid;

    m_member_isValid = ::dc_rest::fromJsonValue(m_member, json[QString("member")]);
    m_member_isSet = !json[QString("member")].isNull() && m_member_isValid;

    m_release_isValid = ::dc_rest::fromJsonValue(m_release, json[QString("release")]);
    m_release_isSet = !json[QString("release")].isNull() && m_release_isValid;

    m_head_commit_isValid = ::dc_rest::fromJsonValue(m_head_commit, json[QString("head_commit")]);
    m_head_commit_isSet = !json[QString("head_commit")].isNull() && m_head_commit_isValid;

    m_commits_isValid = ::dc_rest::fromJsonValue(m_commits, json[QString("commits")]);
    m_commits_isSet = !json[QString("commits")].isNull() && m_commits_isValid;

    m_forced_isValid = ::dc_rest::fromJsonValue(m_forced, json[QString("forced")]);
    m_forced_isSet = !json[QString("forced")].isNull() && m_forced_isValid;

    m_compare_isValid = ::dc_rest::fromJsonValue(m_compare, json[QString("compare")]);
    m_compare_isSet = !json[QString("compare")].isNull() && m_compare_isValid;

    m_review_isValid = ::dc_rest::fromJsonValue(m_review, json[QString("review")]);
    m_review_isSet = !json[QString("review")].isNull() && m_review_isValid;

    m_check_run_isValid = ::dc_rest::fromJsonValue(m_check_run, json[QString("check_run")]);
    m_check_run_isSet = !json[QString("check_run")].isNull() && m_check_run_isValid;

    m_check_suite_isValid = ::dc_rest::fromJsonValue(m_check_suite, json[QString("check_suite")]);
    m_check_suite_isSet = !json[QString("check_suite")].isNull() && m_check_suite_isValid;

    m_discussion_isValid = ::dc_rest::fromJsonValue(m_discussion, json[QString("discussion")]);
    m_discussion_isSet = !json[QString("discussion")].isNull() && m_discussion_isValid;

    m_answer_isValid = ::dc_rest::fromJsonValue(m_answer, json[QString("answer")]);
    m_answer_isSet = !json[QString("answer")].isNull() && m_answer_isValid;
}

QString OAIGithubWebhook::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGithubWebhook::asJsonObject() const {
    QJsonObject obj;
    if (m_sender.isSet()) {
        obj.insert(QString("sender"), ::dc_rest::toJsonValue(m_sender));
    }
    if (m_action_isSet) {
        obj.insert(QString("action"), ::dc_rest::toJsonValue(m_action));
    }
    if (m_ref_isSet) {
        obj.insert(QString("ref"), ::dc_rest::toJsonValue(m_ref));
    }
    if (m_ref_type_isSet) {
        obj.insert(QString("ref_type"), ::dc_rest::toJsonValue(m_ref_type));
    }
    if (m_comment.isSet()) {
        obj.insert(QString("comment"), ::dc_rest::toJsonValue(m_comment));
    }
    if (m_issue.isSet()) {
        obj.insert(QString("issue"), ::dc_rest::toJsonValue(m_issue));
    }
    if (m_pull_request.isSet()) {
        obj.insert(QString("pull_request"), ::dc_rest::toJsonValue(m_pull_request));
    }
    if (m_repository.isSet()) {
        obj.insert(QString("repository"), ::dc_rest::toJsonValue(m_repository));
    }
    if (m_forkee.isSet()) {
        obj.insert(QString("forkee"), ::dc_rest::toJsonValue(m_forkee));
    }
    if (m_member.isSet()) {
        obj.insert(QString("member"), ::dc_rest::toJsonValue(m_member));
    }
    if (m_release.isSet()) {
        obj.insert(QString("release"), ::dc_rest::toJsonValue(m_release));
    }
    if (m_head_commit.isSet()) {
        obj.insert(QString("head_commit"), ::dc_rest::toJsonValue(m_head_commit));
    }
    if (m_commits.size() > 0) {
        obj.insert(QString("commits"), ::dc_rest::toJsonValue(m_commits));
    }
    if (m_forced_isSet) {
        obj.insert(QString("forced"), ::dc_rest::toJsonValue(m_forced));
    }
    if (m_compare_isSet) {
        obj.insert(QString("compare"), ::dc_rest::toJsonValue(m_compare));
    }
    if (m_review.isSet()) {
        obj.insert(QString("review"), ::dc_rest::toJsonValue(m_review));
    }
    if (m_check_run.isSet()) {
        obj.insert(QString("check_run"), ::dc_rest::toJsonValue(m_check_run));
    }
    if (m_check_suite.isSet()) {
        obj.insert(QString("check_suite"), ::dc_rest::toJsonValue(m_check_suite));
    }
    if (m_discussion.isSet()) {
        obj.insert(QString("discussion"), ::dc_rest::toJsonValue(m_discussion));
    }
    if (m_answer.isSet()) {
        obj.insert(QString("answer"), ::dc_rest::toJsonValue(m_answer));
    }
    return obj;
}

OAIGithubUser OAIGithubWebhook::getSender() const {
    return m_sender;
}
void OAIGithubWebhook::setSender(const OAIGithubUser &sender) {
    m_sender = sender;
    m_sender_isSet = true;
}

bool OAIGithubWebhook::is_sender_Set() const{
    return m_sender_isSet;
}

bool OAIGithubWebhook::is_sender_Valid() const{
    return m_sender_isValid;
}

QString OAIGithubWebhook::getAction() const {
    return m_action;
}
void OAIGithubWebhook::setAction(const QString &action) {
    m_action = action;
    m_action_isSet = true;
}

bool OAIGithubWebhook::is_action_Set() const{
    return m_action_isSet;
}

bool OAIGithubWebhook::is_action_Valid() const{
    return m_action_isValid;
}

QString OAIGithubWebhook::getRef() const {
    return m_ref;
}
void OAIGithubWebhook::setRef(const QString &ref) {
    m_ref = ref;
    m_ref_isSet = true;
}

bool OAIGithubWebhook::is_ref_Set() const{
    return m_ref_isSet;
}

bool OAIGithubWebhook::is_ref_Valid() const{
    return m_ref_isValid;
}

QString OAIGithubWebhook::getRefType() const {
    return m_ref_type;
}
void OAIGithubWebhook::setRefType(const QString &ref_type) {
    m_ref_type = ref_type;
    m_ref_type_isSet = true;
}

bool OAIGithubWebhook::is_ref_type_Set() const{
    return m_ref_type_isSet;
}

bool OAIGithubWebhook::is_ref_type_Valid() const{
    return m_ref_type_isValid;
}

OAIGithubComment OAIGithubWebhook::getComment() const {
    return m_comment;
}
void OAIGithubWebhook::setComment(const OAIGithubComment &comment) {
    m_comment = comment;
    m_comment_isSet = true;
}

bool OAIGithubWebhook::is_comment_Set() const{
    return m_comment_isSet;
}

bool OAIGithubWebhook::is_comment_Valid() const{
    return m_comment_isValid;
}

OAIGithubIssue OAIGithubWebhook::getIssue() const {
    return m_issue;
}
void OAIGithubWebhook::setIssue(const OAIGithubIssue &issue) {
    m_issue = issue;
    m_issue_isSet = true;
}

bool OAIGithubWebhook::is_issue_Set() const{
    return m_issue_isSet;
}

bool OAIGithubWebhook::is_issue_Valid() const{
    return m_issue_isValid;
}

OAIGithubIssue OAIGithubWebhook::getPullRequest() const {
    return m_pull_request;
}
void OAIGithubWebhook::setPullRequest(const OAIGithubIssue &pull_request) {
    m_pull_request = pull_request;
    m_pull_request_isSet = true;
}

bool OAIGithubWebhook::is_pull_request_Set() const{
    return m_pull_request_isSet;
}

bool OAIGithubWebhook::is_pull_request_Valid() const{
    return m_pull_request_isValid;
}

OAIGithubRepository OAIGithubWebhook::getRepository() const {
    return m_repository;
}
void OAIGithubWebhook::setRepository(const OAIGithubRepository &repository) {
    m_repository = repository;
    m_repository_isSet = true;
}

bool OAIGithubWebhook::is_repository_Set() const{
    return m_repository_isSet;
}

bool OAIGithubWebhook::is_repository_Valid() const{
    return m_repository_isValid;
}

OAIGithubRepository OAIGithubWebhook::getForkee() const {
    return m_forkee;
}
void OAIGithubWebhook::setForkee(const OAIGithubRepository &forkee) {
    m_forkee = forkee;
    m_forkee_isSet = true;
}

bool OAIGithubWebhook::is_forkee_Set() const{
    return m_forkee_isSet;
}

bool OAIGithubWebhook::is_forkee_Valid() const{
    return m_forkee_isValid;
}

OAIGithubUser OAIGithubWebhook::getMember() const {
    return m_member;
}
void OAIGithubWebhook::setMember(const OAIGithubUser &member) {
    m_member = member;
    m_member_isSet = true;
}

bool OAIGithubWebhook::is_member_Set() const{
    return m_member_isSet;
}

bool OAIGithubWebhook::is_member_Valid() const{
    return m_member_isValid;
}

OAIGithubRelease OAIGithubWebhook::getRelease() const {
    return m_release;
}
void OAIGithubWebhook::setRelease(const OAIGithubRelease &release) {
    m_release = release;
    m_release_isSet = true;
}

bool OAIGithubWebhook::is_release_Set() const{
    return m_release_isSet;
}

bool OAIGithubWebhook::is_release_Valid() const{
    return m_release_isValid;
}

OAIGithubCommit OAIGithubWebhook::getHeadCommit() const {
    return m_head_commit;
}
void OAIGithubWebhook::setHeadCommit(const OAIGithubCommit &head_commit) {
    m_head_commit = head_commit;
    m_head_commit_isSet = true;
}

bool OAIGithubWebhook::is_head_commit_Set() const{
    return m_head_commit_isSet;
}

bool OAIGithubWebhook::is_head_commit_Valid() const{
    return m_head_commit_isValid;
}

QList<OAIGithubCommit> OAIGithubWebhook::getCommits() const {
    return m_commits;
}
void OAIGithubWebhook::setCommits(const QList<OAIGithubCommit> &commits) {
    m_commits = commits;
    m_commits_isSet = true;
}

bool OAIGithubWebhook::is_commits_Set() const{
    return m_commits_isSet;
}

bool OAIGithubWebhook::is_commits_Valid() const{
    return m_commits_isValid;
}

bool OAIGithubWebhook::isForced() const {
    return m_forced;
}
void OAIGithubWebhook::setForced(const bool &forced) {
    m_forced = forced;
    m_forced_isSet = true;
}

bool OAIGithubWebhook::is_forced_Set() const{
    return m_forced_isSet;
}

bool OAIGithubWebhook::is_forced_Valid() const{
    return m_forced_isValid;
}

QString OAIGithubWebhook::getCompare() const {
    return m_compare;
}
void OAIGithubWebhook::setCompare(const QString &compare) {
    m_compare = compare;
    m_compare_isSet = true;
}

bool OAIGithubWebhook::is_compare_Set() const{
    return m_compare_isSet;
}

bool OAIGithubWebhook::is_compare_Valid() const{
    return m_compare_isValid;
}

OAIGithubReview OAIGithubWebhook::getReview() const {
    return m_review;
}
void OAIGithubWebhook::setReview(const OAIGithubReview &review) {
    m_review = review;
    m_review_isSet = true;
}

bool OAIGithubWebhook::is_review_Set() const{
    return m_review_isSet;
}

bool OAIGithubWebhook::is_review_Valid() const{
    return m_review_isValid;
}

OAIGithubCheckRun OAIGithubWebhook::getCheckRun() const {
    return m_check_run;
}
void OAIGithubWebhook::setCheckRun(const OAIGithubCheckRun &check_run) {
    m_check_run = check_run;
    m_check_run_isSet = true;
}

bool OAIGithubWebhook::is_check_run_Set() const{
    return m_check_run_isSet;
}

bool OAIGithubWebhook::is_check_run_Valid() const{
    return m_check_run_isValid;
}

OAIGithubCheckSuite OAIGithubWebhook::getCheckSuite() const {
    return m_check_suite;
}
void OAIGithubWebhook::setCheckSuite(const OAIGithubCheckSuite &check_suite) {
    m_check_suite = check_suite;
    m_check_suite_isSet = true;
}

bool OAIGithubWebhook::is_check_suite_Set() const{
    return m_check_suite_isSet;
}

bool OAIGithubWebhook::is_check_suite_Valid() const{
    return m_check_suite_isValid;
}

OAIGithubDiscussion OAIGithubWebhook::getDiscussion() const {
    return m_discussion;
}
void OAIGithubWebhook::setDiscussion(const OAIGithubDiscussion &discussion) {
    m_discussion = discussion;
    m_discussion_isSet = true;
}

bool OAIGithubWebhook::is_discussion_Set() const{
    return m_discussion_isSet;
}

bool OAIGithubWebhook::is_discussion_Valid() const{
    return m_discussion_isValid;
}

OAIGithubComment OAIGithubWebhook::getAnswer() const {
    return m_answer;
}
void OAIGithubWebhook::setAnswer(const OAIGithubComment &answer) {
    m_answer = answer;
    m_answer_isSet = true;
}

bool OAIGithubWebhook::is_answer_Set() const{
    return m_answer_isSet;
}

bool OAIGithubWebhook::is_answer_Valid() const{
    return m_answer_isValid;
}

bool OAIGithubWebhook::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ref_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ref_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_comment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_issue.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pull_request.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_repository.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_forkee.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_release.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_head_commit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_commits.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_forced_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_compare_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_review.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_check_run.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_check_suite.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_discussion.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_answer.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGithubWebhook::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sender_isValid && true;
}

} // namespace dc_rest
