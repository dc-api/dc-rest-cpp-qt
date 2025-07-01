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

#include "OAIThreadMetadataResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIThreadMetadataResponse::OAIThreadMetadataResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIThreadMetadataResponse::OAIThreadMetadataResponse() {
    this->initializeModel();
}

OAIThreadMetadataResponse::~OAIThreadMetadataResponse() {}

void OAIThreadMetadataResponse::initializeModel() {

    m_archived_isSet = false;
    m_archived_isValid = false;

    m_auto_archive_duration_isSet = false;
    m_auto_archive_duration_isValid = false;

    m_locked_isSet = false;
    m_locked_isValid = false;

    m_archive_timestamp_isSet = false;
    m_archive_timestamp_isValid = false;

    m_create_timestamp_isSet = false;
    m_create_timestamp_isValid = false;

    m_invitable_isSet = false;
    m_invitable_isValid = false;
}

void OAIThreadMetadataResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIThreadMetadataResponse::fromJsonObject(QJsonObject json) {

    m_archived_isValid = ::dc_rest::fromJsonValue(m_archived, json[QString("archived")]);
    m_archived_isSet = !json[QString("archived")].isNull() && m_archived_isValid;

    m_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_auto_archive_duration, json[QString("auto_archive_duration")]);
    m_auto_archive_duration_isSet = !json[QString("auto_archive_duration")].isNull() && m_auto_archive_duration_isValid;

    m_locked_isValid = ::dc_rest::fromJsonValue(m_locked, json[QString("locked")]);
    m_locked_isSet = !json[QString("locked")].isNull() && m_locked_isValid;

    m_archive_timestamp_isValid = ::dc_rest::fromJsonValue(m_archive_timestamp, json[QString("archive_timestamp")]);
    m_archive_timestamp_isSet = !json[QString("archive_timestamp")].isNull() && m_archive_timestamp_isValid;

    m_create_timestamp_isValid = ::dc_rest::fromJsonValue(m_create_timestamp, json[QString("create_timestamp")]);
    m_create_timestamp_isSet = !json[QString("create_timestamp")].isNull() && m_create_timestamp_isValid;

    m_invitable_isValid = ::dc_rest::fromJsonValue(m_invitable, json[QString("invitable")]);
    m_invitable_isSet = !json[QString("invitable")].isNull() && m_invitable_isValid;
}

QString OAIThreadMetadataResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIThreadMetadataResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_archived_isSet) {
        obj.insert(QString("archived"), ::dc_rest::toJsonValue(m_archived));
    }
    if (m_auto_archive_duration_isSet) {
        obj.insert(QString("auto_archive_duration"), ::dc_rest::toJsonValue(m_auto_archive_duration));
    }
    if (m_locked_isSet) {
        obj.insert(QString("locked"), ::dc_rest::toJsonValue(m_locked));
    }
    if (m_archive_timestamp_isSet) {
        obj.insert(QString("archive_timestamp"), ::dc_rest::toJsonValue(m_archive_timestamp));
    }
    if (m_create_timestamp_isSet) {
        obj.insert(QString("create_timestamp"), ::dc_rest::toJsonValue(m_create_timestamp));
    }
    if (m_invitable_isSet) {
        obj.insert(QString("invitable"), ::dc_rest::toJsonValue(m_invitable));
    }
    return obj;
}

bool OAIThreadMetadataResponse::isArchived() const {
    return m_archived;
}
void OAIThreadMetadataResponse::setArchived(const bool &archived) {
    m_archived = archived;
    m_archived_isSet = true;
}

bool OAIThreadMetadataResponse::is_archived_Set() const{
    return m_archived_isSet;
}

bool OAIThreadMetadataResponse::is_archived_Valid() const{
    return m_archived_isValid;
}

qint32 OAIThreadMetadataResponse::getAutoArchiveDuration() const {
    return m_auto_archive_duration;
}
void OAIThreadMetadataResponse::setAutoArchiveDuration(const qint32 &auto_archive_duration) {
    m_auto_archive_duration = auto_archive_duration;
    m_auto_archive_duration_isSet = true;
}

bool OAIThreadMetadataResponse::is_auto_archive_duration_Set() const{
    return m_auto_archive_duration_isSet;
}

bool OAIThreadMetadataResponse::is_auto_archive_duration_Valid() const{
    return m_auto_archive_duration_isValid;
}

bool OAIThreadMetadataResponse::isLocked() const {
    return m_locked;
}
void OAIThreadMetadataResponse::setLocked(const bool &locked) {
    m_locked = locked;
    m_locked_isSet = true;
}

bool OAIThreadMetadataResponse::is_locked_Set() const{
    return m_locked_isSet;
}

bool OAIThreadMetadataResponse::is_locked_Valid() const{
    return m_locked_isValid;
}

QDateTime OAIThreadMetadataResponse::getArchiveTimestamp() const {
    return m_archive_timestamp;
}
void OAIThreadMetadataResponse::setArchiveTimestamp(const QDateTime &archive_timestamp) {
    m_archive_timestamp = archive_timestamp;
    m_archive_timestamp_isSet = true;
}

bool OAIThreadMetadataResponse::is_archive_timestamp_Set() const{
    return m_archive_timestamp_isSet;
}

bool OAIThreadMetadataResponse::is_archive_timestamp_Valid() const{
    return m_archive_timestamp_isValid;
}

QDateTime OAIThreadMetadataResponse::getCreateTimestamp() const {
    return m_create_timestamp;
}
void OAIThreadMetadataResponse::setCreateTimestamp(const QDateTime &create_timestamp) {
    m_create_timestamp = create_timestamp;
    m_create_timestamp_isSet = true;
}

bool OAIThreadMetadataResponse::is_create_timestamp_Set() const{
    return m_create_timestamp_isSet;
}

bool OAIThreadMetadataResponse::is_create_timestamp_Valid() const{
    return m_create_timestamp_isValid;
}

bool OAIThreadMetadataResponse::isInvitable() const {
    return m_invitable;
}
void OAIThreadMetadataResponse::setInvitable(const bool &invitable) {
    m_invitable = invitable;
    m_invitable_isSet = true;
}

bool OAIThreadMetadataResponse::is_invitable_Set() const{
    return m_invitable_isSet;
}

bool OAIThreadMetadataResponse::is_invitable_Valid() const{
    return m_invitable_isValid;
}

bool OAIThreadMetadataResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_archived_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_auto_archive_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_locked_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_archive_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_create_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invitable_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIThreadMetadataResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_archived_isValid && m_auto_archive_duration_isValid && m_locked_isValid && true;
}

} // namespace dc_rest
