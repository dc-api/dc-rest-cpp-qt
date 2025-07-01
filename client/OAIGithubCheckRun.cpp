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

#include "OAIGithubCheckRun.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGithubCheckRun::OAIGithubCheckRun(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGithubCheckRun::OAIGithubCheckRun() {
    this->initializeModel();
}

OAIGithubCheckRun::~OAIGithubCheckRun() {}

void OAIGithubCheckRun::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_html_url_isSet = false;
    m_html_url_isValid = false;

    m_check_suite_isSet = false;
    m_check_suite_isValid = false;

    m_conclusion_isSet = false;
    m_conclusion_isValid = false;

    m_details_url_isSet = false;
    m_details_url_isValid = false;

    m_output_isSet = false;
    m_output_isValid = false;

    m_pull_requests_isSet = false;
    m_pull_requests_isValid = false;
}

void OAIGithubCheckRun::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGithubCheckRun::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_html_url_isValid = ::dc_rest::fromJsonValue(m_html_url, json[QString("html_url")]);
    m_html_url_isSet = !json[QString("html_url")].isNull() && m_html_url_isValid;

    m_check_suite_isValid = ::dc_rest::fromJsonValue(m_check_suite, json[QString("check_suite")]);
    m_check_suite_isSet = !json[QString("check_suite")].isNull() && m_check_suite_isValid;

    m_conclusion_isValid = ::dc_rest::fromJsonValue(m_conclusion, json[QString("conclusion")]);
    m_conclusion_isSet = !json[QString("conclusion")].isNull() && m_conclusion_isValid;

    m_details_url_isValid = ::dc_rest::fromJsonValue(m_details_url, json[QString("details_url")]);
    m_details_url_isSet = !json[QString("details_url")].isNull() && m_details_url_isValid;

    m_output_isValid = ::dc_rest::fromJsonValue(m_output, json[QString("output")]);
    m_output_isSet = !json[QString("output")].isNull() && m_output_isValid;

    m_pull_requests_isValid = ::dc_rest::fromJsonValue(m_pull_requests, json[QString("pull_requests")]);
    m_pull_requests_isSet = !json[QString("pull_requests")].isNull() && m_pull_requests_isValid;
}

QString OAIGithubCheckRun::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGithubCheckRun::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_html_url_isSet) {
        obj.insert(QString("html_url"), ::dc_rest::toJsonValue(m_html_url));
    }
    if (m_check_suite.isSet()) {
        obj.insert(QString("check_suite"), ::dc_rest::toJsonValue(m_check_suite));
    }
    if (m_conclusion_isSet) {
        obj.insert(QString("conclusion"), ::dc_rest::toJsonValue(m_conclusion));
    }
    if (m_details_url_isSet) {
        obj.insert(QString("details_url"), ::dc_rest::toJsonValue(m_details_url));
    }
    if (m_output.isSet()) {
        obj.insert(QString("output"), ::dc_rest::toJsonValue(m_output));
    }
    if (m_pull_requests.size() > 0) {
        obj.insert(QString("pull_requests"), ::dc_rest::toJsonValue(m_pull_requests));
    }
    return obj;
}

QString OAIGithubCheckRun::getName() const {
    return m_name;
}
void OAIGithubCheckRun::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGithubCheckRun::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGithubCheckRun::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIGithubCheckRun::getHtmlUrl() const {
    return m_html_url;
}
void OAIGithubCheckRun::setHtmlUrl(const QString &html_url) {
    m_html_url = html_url;
    m_html_url_isSet = true;
}

bool OAIGithubCheckRun::is_html_url_Set() const{
    return m_html_url_isSet;
}

bool OAIGithubCheckRun::is_html_url_Valid() const{
    return m_html_url_isValid;
}

OAIGithubCheckSuite OAIGithubCheckRun::getCheckSuite() const {
    return m_check_suite;
}
void OAIGithubCheckRun::setCheckSuite(const OAIGithubCheckSuite &check_suite) {
    m_check_suite = check_suite;
    m_check_suite_isSet = true;
}

bool OAIGithubCheckRun::is_check_suite_Set() const{
    return m_check_suite_isSet;
}

bool OAIGithubCheckRun::is_check_suite_Valid() const{
    return m_check_suite_isValid;
}

QString OAIGithubCheckRun::getConclusion() const {
    return m_conclusion;
}
void OAIGithubCheckRun::setConclusion(const QString &conclusion) {
    m_conclusion = conclusion;
    m_conclusion_isSet = true;
}

bool OAIGithubCheckRun::is_conclusion_Set() const{
    return m_conclusion_isSet;
}

bool OAIGithubCheckRun::is_conclusion_Valid() const{
    return m_conclusion_isValid;
}

QString OAIGithubCheckRun::getDetailsUrl() const {
    return m_details_url;
}
void OAIGithubCheckRun::setDetailsUrl(const QString &details_url) {
    m_details_url = details_url;
    m_details_url_isSet = true;
}

bool OAIGithubCheckRun::is_details_url_Set() const{
    return m_details_url_isSet;
}

bool OAIGithubCheckRun::is_details_url_Valid() const{
    return m_details_url_isValid;
}

OAIGithubCheckRunOutput OAIGithubCheckRun::getOutput() const {
    return m_output;
}
void OAIGithubCheckRun::setOutput(const OAIGithubCheckRunOutput &output) {
    m_output = output;
    m_output_isSet = true;
}

bool OAIGithubCheckRun::is_output_Set() const{
    return m_output_isSet;
}

bool OAIGithubCheckRun::is_output_Valid() const{
    return m_output_isValid;
}

QList<OAIGithubCheckPullRequest> OAIGithubCheckRun::getPullRequests() const {
    return m_pull_requests;
}
void OAIGithubCheckRun::setPullRequests(const QList<OAIGithubCheckPullRequest> &pull_requests) {
    m_pull_requests = pull_requests;
    m_pull_requests_isSet = true;
}

bool OAIGithubCheckRun::is_pull_requests_Set() const{
    return m_pull_requests_isSet;
}

bool OAIGithubCheckRun::is_pull_requests_Valid() const{
    return m_pull_requests_isValid;
}

bool OAIGithubCheckRun::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_html_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_check_suite.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_conclusion_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_details_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_output.isSet()) {
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

bool OAIGithubCheckRun::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_html_url_isValid && m_check_suite_isValid && true;
}

} // namespace dc_rest
