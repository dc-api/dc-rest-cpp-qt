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

/*
 * OAIGithubWebhook.h
 *
 * 
 */

#ifndef OAIGithubWebhook_H
#define OAIGithubWebhook_H

#include <QJsonObject>

#include "OAIGithubCheckRun.h"
#include "OAIGithubCheckSuite.h"
#include "OAIGithubComment.h"
#include "OAIGithubCommit.h"
#include "OAIGithubDiscussion.h"
#include "OAIGithubIssue.h"
#include "OAIGithubRelease.h"
#include "OAIGithubRepository.h"
#include "OAIGithubReview.h"
#include "OAIGithubUser.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGithubUser;
class OAIGithubComment;
class OAIGithubIssue;
class OAIGithubRepository;
class OAIGithubRelease;
class OAIGithubCommit;
class OAIGithubReview;
class OAIGithubCheckRun;
class OAIGithubCheckSuite;
class OAIGithubDiscussion;

class OAIGithubWebhook : public OAIObject {
public:
    OAIGithubWebhook();
    OAIGithubWebhook(QString json);
    ~OAIGithubWebhook() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIGithubUser getSender() const;
    void setSender(const OAIGithubUser &sender);
    bool is_sender_Set() const;
    bool is_sender_Valid() const;

    QString getAction() const;
    void setAction(const QString &action);
    bool is_action_Set() const;
    bool is_action_Valid() const;

    QString getRef() const;
    void setRef(const QString &ref);
    bool is_ref_Set() const;
    bool is_ref_Valid() const;

    QString getRefType() const;
    void setRefType(const QString &ref_type);
    bool is_ref_type_Set() const;
    bool is_ref_type_Valid() const;

    OAIGithubComment getComment() const;
    void setComment(const OAIGithubComment &comment);
    bool is_comment_Set() const;
    bool is_comment_Valid() const;

    OAIGithubIssue getIssue() const;
    void setIssue(const OAIGithubIssue &issue);
    bool is_issue_Set() const;
    bool is_issue_Valid() const;

    OAIGithubIssue getPullRequest() const;
    void setPullRequest(const OAIGithubIssue &pull_request);
    bool is_pull_request_Set() const;
    bool is_pull_request_Valid() const;

    OAIGithubRepository getRepository() const;
    void setRepository(const OAIGithubRepository &repository);
    bool is_repository_Set() const;
    bool is_repository_Valid() const;

    OAIGithubRepository getForkee() const;
    void setForkee(const OAIGithubRepository &forkee);
    bool is_forkee_Set() const;
    bool is_forkee_Valid() const;

    OAIGithubUser getMember() const;
    void setMember(const OAIGithubUser &member);
    bool is_member_Set() const;
    bool is_member_Valid() const;

    OAIGithubRelease getRelease() const;
    void setRelease(const OAIGithubRelease &release);
    bool is_release_Set() const;
    bool is_release_Valid() const;

    OAIGithubCommit getHeadCommit() const;
    void setHeadCommit(const OAIGithubCommit &head_commit);
    bool is_head_commit_Set() const;
    bool is_head_commit_Valid() const;

    QList<OAIGithubCommit> getCommits() const;
    void setCommits(const QList<OAIGithubCommit> &commits);
    bool is_commits_Set() const;
    bool is_commits_Valid() const;

    bool isForced() const;
    void setForced(const bool &forced);
    bool is_forced_Set() const;
    bool is_forced_Valid() const;

    QString getCompare() const;
    void setCompare(const QString &compare);
    bool is_compare_Set() const;
    bool is_compare_Valid() const;

    OAIGithubReview getReview() const;
    void setReview(const OAIGithubReview &review);
    bool is_review_Set() const;
    bool is_review_Valid() const;

    OAIGithubCheckRun getCheckRun() const;
    void setCheckRun(const OAIGithubCheckRun &check_run);
    bool is_check_run_Set() const;
    bool is_check_run_Valid() const;

    OAIGithubCheckSuite getCheckSuite() const;
    void setCheckSuite(const OAIGithubCheckSuite &check_suite);
    bool is_check_suite_Set() const;
    bool is_check_suite_Valid() const;

    OAIGithubDiscussion getDiscussion() const;
    void setDiscussion(const OAIGithubDiscussion &discussion);
    bool is_discussion_Set() const;
    bool is_discussion_Valid() const;

    OAIGithubComment getAnswer() const;
    void setAnswer(const OAIGithubComment &answer);
    bool is_answer_Set() const;
    bool is_answer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIGithubUser m_sender;
    bool m_sender_isSet;
    bool m_sender_isValid;

    QString m_action;
    bool m_action_isSet;
    bool m_action_isValid;

    QString m_ref;
    bool m_ref_isSet;
    bool m_ref_isValid;

    QString m_ref_type;
    bool m_ref_type_isSet;
    bool m_ref_type_isValid;

    OAIGithubComment m_comment;
    bool m_comment_isSet;
    bool m_comment_isValid;

    OAIGithubIssue m_issue;
    bool m_issue_isSet;
    bool m_issue_isValid;

    OAIGithubIssue m_pull_request;
    bool m_pull_request_isSet;
    bool m_pull_request_isValid;

    OAIGithubRepository m_repository;
    bool m_repository_isSet;
    bool m_repository_isValid;

    OAIGithubRepository m_forkee;
    bool m_forkee_isSet;
    bool m_forkee_isValid;

    OAIGithubUser m_member;
    bool m_member_isSet;
    bool m_member_isValid;

    OAIGithubRelease m_release;
    bool m_release_isSet;
    bool m_release_isValid;

    OAIGithubCommit m_head_commit;
    bool m_head_commit_isSet;
    bool m_head_commit_isValid;

    QList<OAIGithubCommit> m_commits;
    bool m_commits_isSet;
    bool m_commits_isValid;

    bool m_forced;
    bool m_forced_isSet;
    bool m_forced_isValid;

    QString m_compare;
    bool m_compare_isSet;
    bool m_compare_isValid;

    OAIGithubReview m_review;
    bool m_review_isSet;
    bool m_review_isValid;

    OAIGithubCheckRun m_check_run;
    bool m_check_run_isSet;
    bool m_check_run_isValid;

    OAIGithubCheckSuite m_check_suite;
    bool m_check_suite_isSet;
    bool m_check_suite_isValid;

    OAIGithubDiscussion m_discussion;
    bool m_discussion_isSet;
    bool m_discussion_isValid;

    OAIGithubComment m_answer;
    bool m_answer_isSet;
    bool m_answer_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGithubWebhook)

#endif // OAIGithubWebhook_H
