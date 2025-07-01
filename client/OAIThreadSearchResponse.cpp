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

#include "OAIThreadSearchResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIThreadSearchResponse::OAIThreadSearchResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIThreadSearchResponse::OAIThreadSearchResponse() {
    this->initializeModel();
}

OAIThreadSearchResponse::~OAIThreadSearchResponse() {}

void OAIThreadSearchResponse::initializeModel() {

    m_threads_isSet = false;
    m_threads_isValid = false;

    m_members_isSet = false;
    m_members_isValid = false;

    m_has_more_isSet = false;
    m_has_more_isValid = false;

    m_first_messages_isSet = false;
    m_first_messages_isValid = false;

    m_total_results_isSet = false;
    m_total_results_isValid = false;
}

void OAIThreadSearchResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIThreadSearchResponse::fromJsonObject(QJsonObject json) {

    m_threads_isValid = ::dc_rest::fromJsonValue(m_threads, json[QString("threads")]);
    m_threads_isSet = !json[QString("threads")].isNull() && m_threads_isValid;

    m_members_isValid = ::dc_rest::fromJsonValue(m_members, json[QString("members")]);
    m_members_isSet = !json[QString("members")].isNull() && m_members_isValid;

    m_has_more_isValid = ::dc_rest::fromJsonValue(m_has_more, json[QString("has_more")]);
    m_has_more_isSet = !json[QString("has_more")].isNull() && m_has_more_isValid;

    m_first_messages_isValid = ::dc_rest::fromJsonValue(m_first_messages, json[QString("first_messages")]);
    m_first_messages_isSet = !json[QString("first_messages")].isNull() && m_first_messages_isValid;

    m_total_results_isValid = ::dc_rest::fromJsonValue(m_total_results, json[QString("total_results")]);
    m_total_results_isSet = !json[QString("total_results")].isNull() && m_total_results_isValid;
}

QString OAIThreadSearchResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIThreadSearchResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_threads.size() > 0) {
        obj.insert(QString("threads"), ::dc_rest::toJsonValue(m_threads));
    }
    if (m_members.size() > 0) {
        obj.insert(QString("members"), ::dc_rest::toJsonValue(m_members));
    }
    if (m_has_more_isSet) {
        obj.insert(QString("has_more"), ::dc_rest::toJsonValue(m_has_more));
    }
    if (m_first_messages.size() > 0) {
        obj.insert(QString("first_messages"), ::dc_rest::toJsonValue(m_first_messages));
    }
    if (m_total_results_isSet) {
        obj.insert(QString("total_results"), ::dc_rest::toJsonValue(m_total_results));
    }
    return obj;
}

QList<OAIThreadResponse> OAIThreadSearchResponse::getThreads() const {
    return m_threads;
}
void OAIThreadSearchResponse::setThreads(const QList<OAIThreadResponse> &threads) {
    m_threads = threads;
    m_threads_isSet = true;
}

bool OAIThreadSearchResponse::is_threads_Set() const{
    return m_threads_isSet;
}

bool OAIThreadSearchResponse::is_threads_Valid() const{
    return m_threads_isValid;
}

QList<OAIThreadMemberResponse> OAIThreadSearchResponse::getMembers() const {
    return m_members;
}
void OAIThreadSearchResponse::setMembers(const QList<OAIThreadMemberResponse> &members) {
    m_members = members;
    m_members_isSet = true;
}

bool OAIThreadSearchResponse::is_members_Set() const{
    return m_members_isSet;
}

bool OAIThreadSearchResponse::is_members_Valid() const{
    return m_members_isValid;
}

bool OAIThreadSearchResponse::isHasMore() const {
    return m_has_more;
}
void OAIThreadSearchResponse::setHasMore(const bool &has_more) {
    m_has_more = has_more;
    m_has_more_isSet = true;
}

bool OAIThreadSearchResponse::is_has_more_Set() const{
    return m_has_more_isSet;
}

bool OAIThreadSearchResponse::is_has_more_Valid() const{
    return m_has_more_isValid;
}

QList<OAIMessageResponse> OAIThreadSearchResponse::getFirstMessages() const {
    return m_first_messages;
}
void OAIThreadSearchResponse::setFirstMessages(const QList<OAIMessageResponse> &first_messages) {
    m_first_messages = first_messages;
    m_first_messages_isSet = true;
}

bool OAIThreadSearchResponse::is_first_messages_Set() const{
    return m_first_messages_isSet;
}

bool OAIThreadSearchResponse::is_first_messages_Valid() const{
    return m_first_messages_isValid;
}

qint32 OAIThreadSearchResponse::getTotalResults() const {
    return m_total_results;
}
void OAIThreadSearchResponse::setTotalResults(const qint32 &total_results) {
    m_total_results = total_results;
    m_total_results_isSet = true;
}

bool OAIThreadSearchResponse::is_total_results_Set() const{
    return m_total_results_isSet;
}

bool OAIThreadSearchResponse::is_total_results_Valid() const{
    return m_total_results_isValid;
}

bool OAIThreadSearchResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_threads.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_more_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_messages.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_results_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIThreadSearchResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_threads_isValid && m_members_isValid && true;
}

} // namespace dc_rest
