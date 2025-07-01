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

#include "OAIAuditLogEntryResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIAuditLogEntryResponse::OAIAuditLogEntryResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAuditLogEntryResponse::OAIAuditLogEntryResponse() {
    this->initializeModel();
}

OAIAuditLogEntryResponse::~OAIAuditLogEntryResponse() {}

void OAIAuditLogEntryResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_action_type_isSet = false;
    m_action_type_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_target_id_isSet = false;
    m_target_id_isValid = false;

    m_changes_isSet = false;
    m_changes_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_reason_isSet = false;
    m_reason_isValid = false;
}

void OAIAuditLogEntryResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAuditLogEntryResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_action_type_isValid = ::dc_rest::fromJsonValue(m_action_type, json[QString("action_type")]);
    m_action_type_isSet = !json[QString("action_type")].isNull() && m_action_type_isValid;

    m_user_id_isValid = ::dc_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_target_id_isValid = ::dc_rest::fromJsonValue(m_target_id, json[QString("target_id")]);
    m_target_id_isSet = !json[QString("target_id")].isNull() && m_target_id_isValid;

    m_changes_isValid = ::dc_rest::fromJsonValue(m_changes, json[QString("changes")]);
    m_changes_isSet = !json[QString("changes")].isNull() && m_changes_isValid;

    m_options_isValid = ::dc_rest::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_reason_isValid = ::dc_rest::fromJsonValue(m_reason, json[QString("reason")]);
    m_reason_isSet = !json[QString("reason")].isNull() && m_reason_isValid;
}

QString OAIAuditLogEntryResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAuditLogEntryResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_action_type_isSet) {
        obj.insert(QString("action_type"), ::dc_rest::toJsonValue(m_action_type));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::dc_rest::toJsonValue(m_user_id));
    }
    if (m_target_id_isSet) {
        obj.insert(QString("target_id"), ::dc_rest::toJsonValue(m_target_id));
    }
    if (m_changes.size() > 0) {
        obj.insert(QString("changes"), ::dc_rest::toJsonValue(m_changes));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::dc_rest::toJsonValue(m_options));
    }
    if (m_reason_isSet) {
        obj.insert(QString("reason"), ::dc_rest::toJsonValue(m_reason));
    }
    return obj;
}

QString OAIAuditLogEntryResponse::getId() const {
    return m_id;
}
void OAIAuditLogEntryResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIAuditLogEntryResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAuditLogEntryResponse::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIAuditLogEntryResponse::getActionType() const {
    return m_action_type;
}
void OAIAuditLogEntryResponse::setActionType(const qint32 &action_type) {
    m_action_type = action_type;
    m_action_type_isSet = true;
}

bool OAIAuditLogEntryResponse::is_action_type_Set() const{
    return m_action_type_isSet;
}

bool OAIAuditLogEntryResponse::is_action_type_Valid() const{
    return m_action_type_isValid;
}

QString OAIAuditLogEntryResponse::getUserId() const {
    return m_user_id;
}
void OAIAuditLogEntryResponse::setUserId(const QString &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIAuditLogEntryResponse::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIAuditLogEntryResponse::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString OAIAuditLogEntryResponse::getTargetId() const {
    return m_target_id;
}
void OAIAuditLogEntryResponse::setTargetId(const QString &target_id) {
    m_target_id = target_id;
    m_target_id_isSet = true;
}

bool OAIAuditLogEntryResponse::is_target_id_Set() const{
    return m_target_id_isSet;
}

bool OAIAuditLogEntryResponse::is_target_id_Valid() const{
    return m_target_id_isValid;
}

QList<OAIAuditLogObjectChangeResponse> OAIAuditLogEntryResponse::getChanges() const {
    return m_changes;
}
void OAIAuditLogEntryResponse::setChanges(const QList<OAIAuditLogObjectChangeResponse> &changes) {
    m_changes = changes;
    m_changes_isSet = true;
}

bool OAIAuditLogEntryResponse::is_changes_Set() const{
    return m_changes_isSet;
}

bool OAIAuditLogEntryResponse::is_changes_Valid() const{
    return m_changes_isValid;
}

QMap<QString, QString> OAIAuditLogEntryResponse::getOptions() const {
    return m_options;
}
void OAIAuditLogEntryResponse::setOptions(const QMap<QString, QString> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAIAuditLogEntryResponse::is_options_Set() const{
    return m_options_isSet;
}

bool OAIAuditLogEntryResponse::is_options_Valid() const{
    return m_options_isValid;
}

QString OAIAuditLogEntryResponse::getReason() const {
    return m_reason;
}
void OAIAuditLogEntryResponse::setReason(const QString &reason) {
    m_reason = reason;
    m_reason_isSet = true;
}

bool OAIAuditLogEntryResponse::is_reason_Set() const{
    return m_reason_isSet;
}

bool OAIAuditLogEntryResponse::is_reason_Valid() const{
    return m_reason_isValid;
}

bool OAIAuditLogEntryResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_changes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_reason_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAuditLogEntryResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_action_type_isValid && true;
}

} // namespace dc_rest
