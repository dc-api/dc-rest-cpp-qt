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

#include "OAIGithubCheckSuite.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGithubCheckSuite::OAIGithubCheckSuite(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGithubCheckSuite::OAIGithubCheckSuite() {
    this->initializeModel();
}

OAIGithubCheckSuite::~OAIGithubCheckSuite() {}

void OAIGithubCheckSuite::initializeModel() {

    m_head_sha_isSet = false;
    m_head_sha_isValid = false;

    m_app_isSet = false;
    m_app_isValid = false;

    m_conclusion_isSet = false;
    m_conclusion_isValid = false;

    m_head_branch_isSet = false;
    m_head_branch_isValid = false;

    m_pull_requests_isSet = false;
    m_pull_requests_isValid = false;
}

void OAIGithubCheckSuite::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGithubCheckSuite::fromJsonObject(QJsonObject json) {

    m_head_sha_isValid = ::dc_rest::fromJsonValue(m_head_sha, json[QString("head_sha")]);
    m_head_sha_isSet = !json[QString("head_sha")].isNull() && m_head_sha_isValid;

    m_app_isValid = ::dc_rest::fromJsonValue(m_app, json[QString("app")]);
    m_app_isSet = !json[QString("app")].isNull() && m_app_isValid;

    m_conclusion_isValid = ::dc_rest::fromJsonValue(m_conclusion, json[QString("conclusion")]);
    m_conclusion_isSet = !json[QString("conclusion")].isNull() && m_conclusion_isValid;

    m_head_branch_isValid = ::dc_rest::fromJsonValue(m_head_branch, json[QString("head_branch")]);
    m_head_branch_isSet = !json[QString("head_branch")].isNull() && m_head_branch_isValid;

    m_pull_requests_isValid = ::dc_rest::fromJsonValue(m_pull_requests, json[QString("pull_requests")]);
    m_pull_requests_isSet = !json[QString("pull_requests")].isNull() && m_pull_requests_isValid;
}

QString OAIGithubCheckSuite::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGithubCheckSuite::asJsonObject() const {
    QJsonObject obj;
    if (m_head_sha_isSet) {
        obj.insert(QString("head_sha"), ::dc_rest::toJsonValue(m_head_sha));
    }
    if (m_app.isSet()) {
        obj.insert(QString("app"), ::dc_rest::toJsonValue(m_app));
    }
    if (m_conclusion_isSet) {
        obj.insert(QString("conclusion"), ::dc_rest::toJsonValue(m_conclusion));
    }
    if (m_head_branch_isSet) {
        obj.insert(QString("head_branch"), ::dc_rest::toJsonValue(m_head_branch));
    }
    if (m_pull_requests.size() > 0) {
        obj.insert(QString("pull_requests"), ::dc_rest::toJsonValue(m_pull_requests));
    }
    return obj;
}

QString OAIGithubCheckSuite::getHeadSha() const {
    return m_head_sha;
}
void OAIGithubCheckSuite::setHeadSha(const QString &head_sha) {
    m_head_sha = head_sha;
    m_head_sha_isSet = true;
}

bool OAIGithubCheckSuite::is_head_sha_Set() const{
    return m_head_sha_isSet;
}

bool OAIGithubCheckSuite::is_head_sha_Valid() const{
    return m_head_sha_isValid;
}

OAIGithubCheckApp OAIGithubCheckSuite::getApp() const {
    return m_app;
}
void OAIGithubCheckSuite::setApp(const OAIGithubCheckApp &app) {
    m_app = app;
    m_app_isSet = true;
}

bool OAIGithubCheckSuite::is_app_Set() const{
    return m_app_isSet;
}

bool OAIGithubCheckSuite::is_app_Valid() const{
    return m_app_isValid;
}

QString OAIGithubCheckSuite::getConclusion() const {
    return m_conclusion;
}
void OAIGithubCheckSuite::setConclusion(const QString &conclusion) {
    m_conclusion = conclusion;
    m_conclusion_isSet = true;
}

bool OAIGithubCheckSuite::is_conclusion_Set() const{
    return m_conclusion_isSet;
}

bool OAIGithubCheckSuite::is_conclusion_Valid() const{
    return m_conclusion_isValid;
}

QString OAIGithubCheckSuite::getHeadBranch() const {
    return m_head_branch;
}
void OAIGithubCheckSuite::setHeadBranch(const QString &head_branch) {
    m_head_branch = head_branch;
    m_head_branch_isSet = true;
}

bool OAIGithubCheckSuite::is_head_branch_Set() const{
    return m_head_branch_isSet;
}

bool OAIGithubCheckSuite::is_head_branch_Valid() const{
    return m_head_branch_isValid;
}

QList<OAIGithubCheckPullRequest> OAIGithubCheckSuite::getPullRequests() const {
    return m_pull_requests;
}
void OAIGithubCheckSuite::setPullRequests(const QList<OAIGithubCheckPullRequest> &pull_requests) {
    m_pull_requests = pull_requests;
    m_pull_requests_isSet = true;
}

bool OAIGithubCheckSuite::is_pull_requests_Set() const{
    return m_pull_requests_isSet;
}

bool OAIGithubCheckSuite::is_pull_requests_Valid() const{
    return m_pull_requests_isValid;
}

bool OAIGithubCheckSuite::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_head_sha_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_app.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_conclusion_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_head_branch_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pull_requests.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGithubCheckSuite::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_head_sha_isValid && m_app_isValid && true;
}

} // namespace dc_rest
